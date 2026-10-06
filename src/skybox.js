/** Cubemap faces must share one square size. Some original levels mix 128px
 * and 256px sky artwork; Three.js allocates every face using the first image,
 * so uploading the larger faces directly fails with GL_INVALID_VALUE.
 * Normalize once at level load, retaining face order/orientation and reusing
 * repeated images. Already compatible artwork needs no canvas or extra copy. */
export function normalizeSkyboxFaces(faces,maxSize=Infinity,createCanvas=()=>document.createElement('canvas')) {
  if(faces.length!==6)throw new Error('A skybox requires six images');
  const dimensions=faces.map(image=>[image?.naturalWidth||image?.width,image?.naturalHeight||image?.height]);
  if(dimensions.some(size=>size.some(value=>!Number.isFinite(value)||value<=0)))throw new Error('Skybox images must be loaded before creating the cubemap');
  const size=Math.floor(Math.min(maxSize,Math.max(...dimensions.flat())));
  if(!Number.isFinite(size)||size<1)throw new Error('Invalid maximum skybox size');
  const resized=new Map();
  return faces.map((image,i)=>{
    const [width,height]=dimensions[i];
    if(width===size&&height===size)return image;
    if(!resized.has(image)) {
      const canvas=createCanvas();canvas.width=canvas.height=size;
      const context=canvas.getContext('2d');
      if(!context)throw new Error('Cannot resize skybox artwork');
      context.imageSmoothingEnabled=true;
      context.drawImage(image,0,0,size,size);
      resized.set(image,canvas);
    }
    return resized.get(image);
  });
}
