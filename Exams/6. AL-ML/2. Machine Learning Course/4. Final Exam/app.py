# 10. Deployment

import gradio as gr
import pandas as pd
import pickle
import numpy as np

# 1. Load the Model
with open("Medical_Charges_model.pkl", "rb") as f:
    model=pickle.load(f)

# 2. logic interface
def predict_charges(age,gender,weight,feet,inch,children,smoker,region,income):
    
    if income<0:
        return "Income Must be positive"
    if weight<=0:
        return "Weight Must be greater than 0"
    if feet<=0:
        return "Height must be geater than 0"
    
    h=(feet*12+inch)*(2.54/100) # inch to meter conversion
    bmi=weight/(h**2)
    
    
    if age<18:
        age_group='Child'
    elif age>=18 and age<50:
        age_group='Adult'
    else:
        age_group='Senior'
    
    input_df=pd.DataFrame(
        [[age,gender,bmi,children,smoker,region,age_group,income]],
      columns=[
        'age','sex','bmi','children','smoker','region','age_group','income'
    ]
      )
    
    prediction=model.predict(input_df)[0]
    
    return f"Predicted Medical Charges: {np.round(prediction)}"

# 3. The App Interface
inputs=[
    gr.Number(label="Age",value=18),
    gr.Radio(["male","female"], label="Gender"),
    gr.Number(label="Weight(kg)"),
    gr.Number(label="Height(Feet)"),
    gr.Number(label="Height(Inch)"),
    gr.Dropdown([i for i in range(0,16)], label="Number of Childs"),
    gr.Dropdown(['southwest','southeast','northwest','northeast'], label="Region"),
    gr.Radio(["Yes", "No"], label="Smoker"),
    gr.Number(label="Income"),
]

app=gr.Interface(
    fn=predict_charges,
    inputs=inputs,
    outputs="text", 
    title="Medical Charges Predictor"
    )

app.launch()