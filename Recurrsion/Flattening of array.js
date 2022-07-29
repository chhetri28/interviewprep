let aa=[1,2,3,[[[4]]],[5]];

const flatten=(arr)=>{
    res=arr.reduce((acc,item)=>{
        if(Array.isArray(item)){
            acc=acc.concat(flatten(item));
        }
        else acc.push(item);

        return acc;
    },[]);
    return res;
}


console.log(flatten(aa));