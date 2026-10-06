import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {normalizeSkyboxFaces} from '../src/skybox.js';

function canvasFactory() {
  const calls=[],canvases=[];
  const create=()=>{
    const canvas={width:0,height:0,getContext:()=>({drawImage:(...args)=>calls.push(args)})};
    canvases.push(canvas);return canvas;
  };
  return {create,calls,canvases};
}

test('actual campaign sky artwork becomes upload-compatible, with existing uniform skies untouched',()=>{
  const resized=[];
  for(let i=0;i<5;i++) {
    const base=new URL(`../data/levels/lvl0${i}a/`,import.meta.url);
    const level=JSON.parse(fs.readFileSync(new URL('level.json',base))),indices=level.sky.textures;
    const first=indices.find(index=>index>=0);
    if(first===undefined){assert.equal(i,3,'only the Caves have no authored skybox');continue;}
    const images=new Map();
    for(const index of new Set(indices.filter(index=>index>=0))) {
      const texture=level.textures[index],png=fs.readFileSync(new URL(texture.file,base));
      const width=png.readUInt32BE(16),height=png.readUInt32BE(20);
      assert.equal(width,texture.width);assert.equal(height,texture.height);
      images.set(index,{width,height,file:texture.file});
    }
    const faces=indices.map(index=>images.get(index<0?first:index)),factory=canvasFactory();
    const output=normalizeSkyboxFaces(faces,4096,factory.create);
    assert.ok(output.every(image=>image.width===256&&image.height===256));
    for(let face=0;face<6;face++) {
      const original=faces[face];
      if(original.width===256)assert.equal(output[face],original);
      else assert.ok(factory.calls.some(call=>call[0]===original));
    }
    factory.calls.forEach(call=>assert.deepEqual(call.slice(1),[0,0,256,256],'full-image resize, no crop or reflection'));
    if(factory.canvases.length)resized.push([i+1,factory.canvases.length]);
    else assert.deepEqual(output,faces);
    if(i===4)assert.equal(output[0],output[1],'Tower repeated sky00 uses one resized canvas');
  }
  assert.deepEqual(resized,[[2,2],[5,1]]);
});

test('GPU cube limit applies to every face, preserving shared source images and source dimensions',()=>{
  const small={width:128,height:128},large={width:256,height:256},faces=[small,small,large,large,large,large];
  const factory=canvasFactory(),output=normalizeSkyboxFaces(faces,64,factory.create);
  assert.ok(output.every(image=>image.width===64&&image.height===64));
  assert.equal(factory.canvases.length,2);assert.equal(output[0],output[1]);assert.equal(output[2],output[5]);
  assert.deepEqual(small,{width:128,height:128});assert.deepEqual(large,{width:256,height:256});
});

test('intrinsic image dimensions determine upload size regardless of element display dimensions',()=>{
  const image={naturalWidth:256,naturalHeight:256,width:128,height:128},factory=canvasFactory();
  assert.deepEqual(normalizeSkyboxFaces(Array(6).fill(image),4096,factory.create),Array(6).fill(image));
  assert.equal(factory.canvases.length,0);
});

test('incomplete images and invalid cube limits fail before attempting GPU upload',()=>{
  assert.throws(()=>normalizeSkyboxFaces([]),/six images/);
  assert.throws(()=>normalizeSkyboxFaces(Array(6).fill({width:0,height:0})),/must be loaded/);
  assert.throws(()=>normalizeSkyboxFaces(Array(6).fill({width:128,height:128}),0),/maximum skybox size/);
});
