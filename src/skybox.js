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

/** Genesis stores top, bottom, left, right, front (-Z), back (+Z).
 * Three's background cubemap uses +X, -X, +Y, -Y, +Z, -Z and flips X
 * when sampling an ordinary CubeTexture. The side UVs then match Genesis;
 * the top and bottom need a half turn. Do this once, never while rendering.
 * Unassigned native faces draw no artwork: use a blank black face rather
 * than copying another face into an unauthored part of the sky. */
export function nativeSkyboxFaces(images,maxSize=Infinity,createCanvas=()=>document.createElement('canvas')) {
  if(images.length!==6)throw new Error('A skybox requires six images');
  if(images.every(image=>image==null))return null;
  let blank;
  const faces=[2,3,0,1,5,4].map(index=>{
    if(images[index]!=null)return images[index];
    if(!blank) {
      blank=createCanvas();blank.width=blank.height=1;
      const context=blank.getContext('2d');
      if(!context)throw new Error('Cannot prepare missing skybox face');
      context.fillStyle='#000';context.fillRect(0,0,1,1);
    }
    return blank;
  });
  const normalized=normalizeSkyboxFaces(faces,maxSize,createCanvas),rotated=new Map();
  for(const index of [2,3]) {
    if(faces[index]===blank)continue;
    const image=normalized[index];
    if(!rotated.has(image)) {
      const canvas=createCanvas();canvas.width=image.naturalWidth||image.width;canvas.height=image.naturalHeight||image.height;
      const context=canvas.getContext('2d');
      if(!context)throw new Error('Cannot orient skybox artwork');
      context.translate(canvas.width,canvas.height);context.scale(-1,-1);
      context.drawImage(image,0,0);rotated.set(image,canvas);
    }
    normalized[index]=rotated.get(image);
  }
  return normalized;
}
