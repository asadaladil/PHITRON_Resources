from django.shortcuts import render
from rest_framework import viewsets
from . import models,serializers
from .import permissions
from django_filters.rest_framework import DjangoFilterBackend
from rest_framework import filters
from .import paginations
# Create your views here.

class ProductViewSet(viewsets.ModelViewSet):
    permission_classes=([permissions.AdminOrReadOnly])
    queryset = models.Product.objects.all()
    serializer_class=serializers.ProductSerializer
    pagination_class=paginations.ProductCursorPagination
"""filter_backends = [filters.SearchFilter]
    search_fields = ['name', 'description']
    filter_backends = [filters.OrderingFilter] #because of using cursor pagination
    ordering_fields = ['price'] """
    #pagination_class=paginations.PageNumberPagination
    #pagination_class=paginations.ProductLimitOffsetPagination
    
   
        
    
class ProductReviewViewSet(viewsets.ModelViewSet):
    permission_classes=[permissions.ReviewerOrReadOnly]
    serializer_class=serializers.ProductReviewSerializer
    """ def get_queryset(self):
        
        #Optionally restricts the returned purchases to a given user,
        #by filtering against a `username` query parameter in the URL.
        
        queryset=models.ProductReview.objects.all()
        username = self.request.query_params.get('username')
        if username is not None:
            queryset = queryset.filter(user__username__icontains=username)
        return queryset """
    
    filter_backends = [DjangoFilterBackend]
    filterset_fields = ['category', 'in_stock']
