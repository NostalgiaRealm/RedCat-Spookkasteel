"""Build a small shared library from exact retained Genesis reference functions.
No source/build modification; all generated material is in the audit directory.
"""
from pathlib import Path
import re,subprocess
HERE=Path(__file__).resolve().parent; ROOT=HERE.parents[2]
REF=ROOT/'temp_work/gargoyle-transparency-2026-09-29/genesis-reference'
def extract(path,name):
 text=(REF/path).read_text(encoding='latin1')
 match=re.search(r'^(?:GENESISAPI )?(?:static )?[\w]+ (?:GENESISCC )?'+name+r'\s*\(',text,re.M)
 if not match: raise ValueError(name)
 a=match.start(); b=text.index('{',match.end()); count=1;i=b+1
 while count:
  count+=(text[i]=='{')-(text[i]=='}');i+=1
 return text[a:i]+'\n'
prefix=r'''
/* Audit-only wrapper. Extracted Genesis functions retain the original license
 * in retained genesis-reference/Math/quatern.c, Actor/vkframe.c, Actor/pose.c.
 * Genesis3D Public License v1.01, Copyright 1999 WildTangent Inc. */
#define NDEBUG
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define GENESISAPI
#define GENESISCC
#define geQuaternion_Assert assert
#define GE_TRUE 1
#define GE_FALSE 0
#define TRACE_QZERO_TOLERANCE .1
#define EPSILON .00001
#define QUATERNION_PI 3.14159265358979323846
#define LINEAR_BLEND(a,b,t) ((a)+((b)-(a))*(t))
typedef float geFloat;
typedef int geBoolean;
typedef struct {float X,Y,Z;} geVec3d;
typedef struct {float W,X,Y,Z;} geQuaternion;
typedef struct {float AX,AY,AZ,BX,BY,BZ,CX,CY,CZ;geVec3d Translation;} geXForm3d;
typedef struct {float Time;geVec3d V;} VKey;
typedef struct {VKey Key;geVec3d SDerivative,DDerivative;} geVKFrame_Hermite;
typedef struct {int count,size;void *data;} geTKArray;
int geTKArray_NumElements(const geTKArray*a){return a->count;}
int geTKArray_ElementSize(const geTKArray*a){return a->size;}
void *geTKArray_Element(const geTKArray*a,int i){return (char*)a->data+i*a->size;}
void geVec3d_Clear(geVec3d*d){d->X=d->Y=d->Z=0;}
void geVec3d_Copy(const geVec3d*s,geVec3d*d){*d=*s;}
void geVec3d_Add(const geVec3d*a,const geVec3d*b,geVec3d*d){d->X=a->X+b->X;d->Y=a->Y+b->Y;d->Z=a->Z+b->Z;}
void geVec3d_Subtract(const geVec3d*a,const geVec3d*b,geVec3d*d){d->X=a->X-b->X;d->Y=a->Y-b->Y;d->Z=a->Z-b->Z;}
void geVec3d_Scale(const geVec3d*a,float s,geVec3d*d){d->X=a->X*s;d->Y=a->Y*s;d->Z=a->Z*s;}
void geVec3d_AddScaled(const geVec3d*a,const geVec3d*b,float s,geVec3d*d){d->X=a->X+b->X*s;d->Y=a->Y+b->Y*s;d->Z=a->Z+b->Z*s;}
void geXForm3d_Transform(const geXForm3d*m,const geVec3d*v,geVec3d*out){geVec3d r={m->AX*v->X+m->AY*v->Y+m->AZ*v->Z+m->Translation.X,m->BX*v->X+m->BY*v->Y+m->BZ*v->Z+m->Translation.Y,m->CX*v->X+m->CY*v->Y+m->CZ*v->Z+m->Translation.Z};*out=r;}
typedef struct {geQuaternion AttachmentRotation,LocalRotation,Rotation;geVec3d LocalTranslation;geXForm3d AttachmentTransform,*Transform;int NoAttachmentRotation;} gePose_Joint;
'''
functions=[]
for name in ['geQuaternion_FromMatrix','geQuaternion_ToMatrix','geQuaternion_SlerpNotShortest','geQuaternion_Multiply','geQuaternion_Add','geQuaternion_Subtract']:
 functions.append(extract(Path('Math/quatern.c'),name))
functions.append(extract(Path('Actor/QKFrame.c'),'geQKFrame_ChooseBestQuat'))
for name in ['geVKFrame_HermiteInterpolation','geVKFrame_HermiteRecompute']:
 functions.append(extract(Path('Actor/vkframe.c'),name))
functions.append(extract(Path('Actor/pose.c'),'gePose_SetAttachmentRotationFlag'))
functions.append(extract(Path('Actor/pose.c'),'gePose_JointRelativeToParent'))
wrapper=r'''
void sample(int count,const float *times,const float*values,int rotation,float time,float*out){
 int i=0,j;float t;
 while(i+1<count && times[i+1]<=time)i++;
 j=i+1<count?i+1:i;
 if(time<=times[0])i=j=0;
 t=i==j?0:(time-times[i])/(times[j]-times[i]);
 if(rotation){
  geQuaternion* keys=calloc(count,sizeof(*keys));
  for(int k=0;k<count;k++){keys[k].X=values[4*k];keys[k].Y=values[4*k+1];keys[k].Z=values[4*k+2];keys[k].W=values[4*k+3];if(k)geQKFrame_ChooseBestQuat(keys+k-1,keys+k);}
  geQuaternion q;if(i==j)q=keys[i];else geQuaternion_SlerpNotShortest(keys+i,keys+j,t,&q);
  out[0]=q.X;out[1]=q.Y;out[2]=q.Z;out[3]=q.W;free(keys);
 }else{
  geVKFrame_Hermite* keys=calloc(count,sizeof(*keys));
  for(int k=0;k<count;k++){keys[k].Key.Time=times[k];memcpy(&keys[k].Key.V,values+3*k,3*sizeof(float));}
  geTKArray a={count,sizeof(*keys),keys};geVKFrame_HermiteRecompute(0,0,&a);
  geVKFrame_HermiteInterpolation(keys+i,keys+j,t,out);free(keys);
 }
}
void pose(int count,const float *attachments,const int*parents,const float*translations,const float*rotations,float*out){
 gePose_Joint* joints=calloc(count,sizeof(*joints));
 geXForm3d identity={1,0,0,0,1,0,0,0,1,{0,0,0}};
 gePose_Joint root={0};root.Rotation.W=1;root.Transform=&identity;
 for(int i=0;i<count;i++){
  gePose_Joint*j=joints+i;memcpy(&j->AttachmentTransform,attachments+12*i,12*sizeof(float));geQuaternion_FromMatrix(&j->AttachmentTransform,&j->AttachmentRotation);gePose_SetAttachmentRotationFlag(j);
  j->LocalRotation.X=rotations[4*i];j->LocalRotation.Y=rotations[4*i+1];j->LocalRotation.Z=rotations[4*i+2];j->LocalRotation.W=rotations[4*i+3];memcpy(&j->LocalTranslation,translations+3*i,3*sizeof(float));j->Transform=(geXForm3d*)(out+12*i);
  gePose_JointRelativeToParent(parents[i]<0?&root:joints+parents[i],j);
 }
 free(joints);
}
'''
(HERE/'native_reference.c').write_text(prefix+'\n'.join(functions)+wrapper)
subprocess.run(['cc','-std=c11','-shared','-fPIC','-O0','-ffp-contract=off',str(HERE/'native_reference.c'),'-lm','-o',str(HERE/'native_reference.so')],check=True)
print(HERE/'native_reference.so')
