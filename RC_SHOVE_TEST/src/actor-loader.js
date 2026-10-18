import * as THREE from 'three';
import { ActorAnimator } from './animation.js';

const templates = new Map();
const textures = new THREE.TextureLoader();

async function loadTemplate(stem) {
  const response = await fetch(new URL(`../assets/actors/${stem}.json`, import.meta.url));
  if (!response.ok) throw new Error(`Could not load actor ${stem}: HTTP ${response.status}`);
  const data = await response.json();
  const geometry = new THREE.BufferGeometry();
  geometry.setAttribute('position', new THREE.Float32BufferAttribute(data.positions, 3));
  geometry.setAttribute('normal', new THREE.Float32BufferAttribute(data.normals, 3));
  geometry.setAttribute('uv', new THREE.Float32BufferAttribute(data.uvs, 2));
  geometry.setIndex(data.indices);
  for (const group of data.groups) geometry.addGroup(group.start, group.count, group.materialIndex);
  const materials = await Promise.all(data.materials.map(async material => {
    const map = material.texture
      ? await textures.loadAsync(new URL(`../assets/actors/${material.texture}`, import.meta.url).href)
      : null;
    if (map) { map.flipY = true; map.colorSpace = THREE.SRGBColorSpace; map.needsUpdate = true; }
    return new THREE.MeshLambertMaterial({
      map,
      color: map ? 0xffffff : new THREE.Color().setRGB(...material.color, THREE.SRGBColorSpace),
      side: THREE.DoubleSide,
      alphaTest: 0.3,
    });
  }));
  return { data, geometry, materials };
}

/** Independent actor instance; bounds are in root-local coordinates at the idle pose. */
export async function loadActor(name = 'redcat', options = {}) {
  const stem = String(name).replace(/^.*[\\/]/, '').replace(/\.(act|json)$/i, '').toLowerCase();
  if (!/^[a-z0-9_-]+$/.test(stem)) throw new Error('Invalid actor name');
  if (!templates.has(stem)) templates.set(stem, loadTemplate(stem));
  const template = await templates.get(stem);
  const { data } = template;
  // The rigid vertex animator writes into positions and normals every pose.
  const geometry = template.geometry.clone();
  const root = new THREE.Group();
  root.name = stem;
  const mesh = new THREE.Mesh(geometry, template.materials.map(material => material.clone()));
  mesh.name = `${stem}-mesh`;
  mesh.rotation.set(...(data.settings?.initialRotationDegrees || [-90, 0, 0]).map(THREE.MathUtils.degToRad));
  mesh.scale.setScalar(options.scale ?? data.settings?.scale ?? 1);
  mesh.castShadow = true;
  mesh.receiveShadow = true;
  root.add(mesh);
  const animator = data.animations?.length ? new ActorAnimator(data, geometry) : null;
  if (animator) animator.play('idle') || animator.play(data.animations[0].name);
  geometry.computeBoundingBox();
  mesh.updateMatrix();
  const bounds = geometry.boundingBox.clone().applyMatrix4(mesh.matrix);
  Object.assign(root.userData, { mesh, animator, data, bounds });
  return { root, mesh, animator, data, bounds };
}
