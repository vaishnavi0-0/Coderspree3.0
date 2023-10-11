int dataTypes(string type) {
	// Write your code here
    if(type[0] == 'I'){
        return sizeof(int);
    }
    else if(type[0] == 'L'){
        return sizeof(long);
    }
    else if(type[0] == 'F'){
        return sizeof(float);
    }
    else if(type[0] == 'C'){
        return sizeof(char);
    }
    else{
        return sizeof(double);
    }
   return 0;
}
