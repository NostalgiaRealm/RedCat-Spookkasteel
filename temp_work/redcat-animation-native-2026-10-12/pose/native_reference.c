
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
void GENESISCC geQuaternion_FromMatrix(
	const geXForm3d		*M,
	      geQuaternion	*Q)
	// takes upper 3 by 3 portion of matrix (rotation sub matrix) 
	// and generates a quaternion
{
	geFloat trace,s;

	assert( M != NULL );
	assert( Q != NULL );
	geQuaternion_Assert( geXForm3d_IsOrthonormal(M)==GE_TRUE );

	trace = M->AX + M->BY + M->CZ;
	if (trace > 0.0f)
		{
			s = (geFloat)sqrt(trace + 1.0f);
			Q->W = s * 0.5f;
			s = 0.5f / s;

			Q->X = (M->CY - M->BZ) * s;
			Q->Y = (M->AZ - M->CX) * s;
			Q->Z = (M->BX - M->AY) * s;
		}
	else
		{
			int biggest;
			enum {A,E,I};
			if (M->AX > M->BY)
				{
					if (M->CZ > M->AX)
						biggest = I;	
					else
						biggest = A;
				}
			else
				{
					if (M->CZ > M->AX)
						biggest = I;
					else
						biggest = E;
				}

			// in the unusual case the original trace fails to produce a good sqrt, try others...
			switch (biggest)
				{
				case A:
					s = (geFloat)sqrt( M->AX - (M->BY + M->CZ) + 1.0);
					if (s > TRACE_QZERO_TOLERANCE)
						{
							Q->X = s * 0.5f;
							s = 0.5f / s;
							Q->W = (M->CY - M->BZ) * s;
							Q->Y = (M->AY + M->BX) * s;
							Q->Z = (M->AZ + M->CX) * s;
							break;
						}
							// I
							s = (geFloat)sqrt( M->CZ - (M->AX + M->BY) + 1.0);
							if (s > TRACE_QZERO_TOLERANCE)
								{
									Q->Z = s * 0.5f;
									s = 0.5f / s;
									Q->W = (M->BX - M->AY) * s;
									Q->X = (M->CX + M->AZ) * s;
									Q->Y = (M->CY + M->BZ) * s;
									break;
								}
							// E
							s = (geFloat)sqrt( M->BY - (M->CZ + M->AX) + 1.0);
							if (s > TRACE_QZERO_TOLERANCE)
								{
									Q->Y = s * 0.5f;
									s = 0.5f / s;
									Q->W = (M->AZ - M->CX) * s;
									Q->Z = (M->BZ + M->CY) * s;
									Q->X = (M->BX + M->AY) * s;
									break;
								}
							break;
				case E:
					s = (geFloat)sqrt( M->BY - (M->CZ + M->AX) + 1.0);
					if (s > TRACE_QZERO_TOLERANCE)
						{
							Q->Y = s * 0.5f;
							s = 0.5f / s;
							Q->W = (M->AZ - M->CX) * s;
							Q->Z = (M->BZ + M->CY) * s;
							Q->X = (M->BX + M->AY) * s;
							break;
						}
							// I
							s = (geFloat)sqrt( M->CZ - (M->AX + M->BY) + 1.0);
							if (s > TRACE_QZERO_TOLERANCE)
								{
									Q->Z = s * 0.5f;
									s = 0.5f / s;
									Q->W = (M->BX - M->AY) * s;
									Q->X = (M->CX + M->AZ) * s;
									Q->Y = (M->CY + M->BZ) * s;
									break;
								}
							// A
							s = (geFloat)sqrt( M->AX - (M->BY + M->CZ) + 1.0);
							if (s > TRACE_QZERO_TOLERANCE)
								{
									Q->X = s * 0.5f;
									s = 0.5f / s;
									Q->W = (M->CY - M->BZ) * s;
									Q->Y = (M->AY + M->BX) * s;
									Q->Z = (M->AZ + M->CX) * s;
									break;
								}
					break;
				case I:
					s = (geFloat)sqrt( M->CZ - (M->AX + M->BY) + 1.0);
					if (s > TRACE_QZERO_TOLERANCE)
						{
							Q->Z = s * 0.5f;
							s = 0.5f / s;
							Q->W = (M->BX - M->AY) * s;
							Q->X = (M->CX + M->AZ) * s;
							Q->Y = (M->CY + M->BZ) * s;
							break;
						}
							// A
							s = (geFloat)sqrt( M->AX - (M->BY + M->CZ) + 1.0);
							if (s > TRACE_QZERO_TOLERANCE)
								{
									Q->X = s * 0.5f;
									s = 0.5f / s;
									Q->W = (M->CY - M->BZ) * s;
									Q->Y = (M->AY + M->BX) * s;
									Q->Z = (M->AZ + M->CX) * s;
									break;
								}
							// E
							s = (geFloat)sqrt( M->BY - (M->CZ + M->AX) + 1.0);
							if (s > TRACE_QZERO_TOLERANCE)
								{
									Q->Y = s * 0.5f;
									s = 0.5f / s;
									Q->W = (M->AZ - M->CX) * s;
									Q->Z = (M->BZ + M->CY) * s;
									Q->X = (M->BX + M->AY) * s;
									break;
								}
					break;
				default:
					assert(0);
				}
		}
	geQuaternion_Assert( geQuaternion_IsUnit(Q) == GE_TRUE );
}

GENESISAPI void GENESISCC geQuaternion_ToMatrix(
	const geQuaternion	*Q, 
		  geXForm3d		*M)
	// takes a unit quaternion and fills out an equivelant rotation
	// portion of a xform
{
	geFloat X2,Y2,Z2;		//2*QX, 2*QY, 2*QZ
	geFloat XX2,YY2,ZZ2;	//2*QX*QX, 2*QY*QY, 2*QZ*QZ
	geFloat XY2,XZ2,XW2;	//2*QX*QY, 2*QX*QZ, 2*QX*QW
	geFloat YZ2,YW2,ZW2;	// ...

	assert( geQuaternion_IsValid(Q) != GE_FALSE );
	assert( M != NULL );
	geQuaternion_Assert( geQuaternion_IsUnit(Q) == GE_TRUE );
	
	
	X2  = 2.0f * Q->X;
	XX2 = X2   * Q->X;
	XY2 = X2   * Q->Y;
	XZ2 = X2   * Q->Z;
	XW2 = X2   * Q->W;

	Y2  = 2.0f * Q->Y;
	YY2 = Y2   * Q->Y;
	YZ2 = Y2   * Q->Z;
	YW2 = Y2   * Q->W;
	
	Z2  = 2.0f * Q->Z;
	ZZ2 = Z2   * Q->Z;
	ZW2 = Z2   * Q->W;
	
	M->AX = 1.0f - YY2 - ZZ2;
	M->AY = XY2  - ZW2;
	M->AZ = XZ2  + YW2;

	M->BX = XY2  + ZW2;
	M->BY = 1.0f - XX2 - ZZ2;
	M->BZ = YZ2  - XW2;

	M->CX = XZ2  - YW2;
	M->CY = YZ2  + XW2;
	M->CZ = 1.0f - XX2 - YY2;

	M->Translation.X = M->Translation.Y = M->Translation.Z = 0.0f;

	geQuaternion_Assert( geXForm3d_IsOrthonormal(M)==GE_TRUE );

}

void GENESISCC geQuaternion_SlerpNotShortest(
	const geQuaternion		*Q0, 
	const geQuaternion		*Q1, 
	geFloat					T,		
	geQuaternion			*QT)
	// spherical interpolation between q0 and q1.   0<=t<=1 
	// resulting quaternion is 'between' q0 and q1
	// with t==0 being all q0, and t==1 being all q1.
{
	geFloat omega,cosom,sinom,Scale0,Scale1;
	assert( Q0 != NULL );
	assert( Q1 != NULL );
	assert( QT  != NULL );
	assert( ( 0 <= T ) && ( T <= 1.0f ) );
	geQuaternion_Assert( geQuaternion_IsUnit(Q0) == GE_TRUE );
	geQuaternion_Assert( geQuaternion_IsUnit(Q1) == GE_TRUE );

	cosom =		(Q0->W * Q1->W) + (Q0->X * Q1->X) 
			  + (Q0->Y * Q1->Y) + (Q0->Z * Q1->Z);
	if ( (1.0f + cosom) > EPSILON )
		{
			if ( (1.0f - cosom) > EPSILON )
				{
					omega  = (geFloat) acos( cosom );
					sinom  = (geFloat) sin( omega );
					// has numerical difficulties around cosom == nPI/2
					// in this case everything is up for grabs... 
					//  ...degenerate to linear interpolation
					if (sinom < EPSILON)
						{
							Scale0 = 1.0f - T;
							Scale1 = T;	
						}
					else
						{
							Scale0 = (geFloat) sin( (1.0f-T) * omega) / sinom;
							Scale1 = (geFloat) sin( T*omega) / sinom;
						}
				}
			else
				{
					// has numerical difficulties around cosom == 0
					// in this case degenerate to linear interpolation
				
					Scale0 = 1.0f - T;
					Scale1 = T;
				}
			QT-> X = Scale0 * Q0->X + Scale1 * Q1->X;
			QT-> Y = Scale0 * Q0->Y + Scale1 * Q1->Y;
			QT-> Z = Scale0 * Q0->Z + Scale1 * Q1->Z;
			QT-> W = Scale0 * Q0->W + Scale1 * Q1->W;
			//#pragma message (" ack:!!!!!!")
			//geQuaternionNormalize(QT); 
			geQuaternion_Assert( geQuaternion_IsUnit(QT));
		}
	else
		{
			QT->X = -Q0->Y; 
			QT->Y =  Q0->X;
			QT->Z = -Q0->W;
			QT->W =  Q0->Z;
			Scale0 = (geFloat) sin( (1.0f - T) * (QUATERNION_PI*0.5) );
			Scale1 = (geFloat) sin( T * (QUATERNION_PI*0.5) );
			QT-> X = Scale0 * Q0->X + Scale1 * QT->X;
			QT-> Y = Scale0 * Q0->Y + Scale1 * QT->Y;
			QT-> Z = Scale0 * Q0->Z + Scale1 * QT->Z;
			QT-> W = Scale0 * Q0->W + Scale1 * QT->W;
			geQuaternion_Assert( geQuaternion_IsUnit(QT));
		}
}

void GENESISCC geQuaternion_Multiply(
	const geQuaternion	*Q1, 
	const geQuaternion	*Q2, 
	geQuaternion		*Q)
	// multiplies q1 * q2, and places the result in q.
	// no failure. 	renormalization not automatic

{
	geQuaternion Q1L,Q2L;
	assert( geQuaternion_IsValid(Q1) != GE_FALSE );
	assert( geQuaternion_IsValid(Q2) != GE_FALSE );
	assert( Q  != NULL );
	Q1L = *Q1;
	Q2L = *Q2;

	Q->W  =	(  (Q1L.W*Q2L.W) - (Q1L.X*Q2L.X) 
			 - (Q1L.Y*Q2L.Y) - (Q1L.Z*Q2L.Z) );

	Q->X  =	(  (Q1L.W*Q2L.X) + (Q1L.X*Q2L.W) 
			 + (Q1L.Y*Q2L.Z) - (Q1L.Z*Q2L.Y) );

	Q->Y  =	(  (Q1L.W*Q2L.Y) - (Q1L.X*Q2L.Z) 
			 + (Q1L.Y*Q2L.W) + (Q1L.Z*Q2L.X) );

	Q->Z  = (  (Q1L.W*Q2L.Z) + (Q1L.X*Q2L.Y) 
			 - (Q1L.Y*Q2L.X) + (Q1L.Z*Q2L.W) );
	geQuaternion_Assert( geQuaternion_IsValid(Q) != GE_FALSE );

}

void GENESISCC geQuaternion_Add(
	const geQuaternion *Q1, 
	const geQuaternion *Q2, 
	geQuaternion *QSum)
	// QSum = Q1 + Q2  (result is not generally a unit quaternion!)
{
	assert( geQuaternion_IsValid(Q1) != GE_FALSE );
	assert( geQuaternion_IsValid(Q2) != GE_FALSE );
	assert( QSum != NULL );
	QSum->W = Q1->W + Q2->W;
	QSum->X = Q1->X + Q2->X;
	QSum->Y = Q1->Y + Q2->Y;
	QSum->Z = Q1->Z + Q2->Z;
}

void GENESISCC geQuaternion_Subtract(
	const geQuaternion *Q1, 
	const geQuaternion *Q2, 
	geQuaternion *QSum)
	// QSum = Q1 - Q2  (result is not generally a unit quaternion!)
{
	assert( geQuaternion_IsValid(Q1) != GE_FALSE );
	assert( geQuaternion_IsValid(Q2) != GE_FALSE );
	assert( QSum != NULL );
	QSum->W = Q1->W - Q2->W;
	QSum->X = Q1->X - Q2->X;
	QSum->Y = Q1->Y - Q2->Y;
	QSum->Z = Q1->Z - Q2->Z;
}

static void GENESISCC geQKFrame_ChooseBestQuat(const geQuaternion *Q0,geQuaternion *Q1)
	// adjusts the sign of Q1:  to either Q1 or -Q1
	// adjusts Q1 such that Q1 is the 'closest' of the two choices to Q0.
{
	geQuaternion pLessQ,pPlusQ;
	geFloat MagpLessQ,MagpPlusQ;

	assert( Q0 != NULL );
	assert( Q1 != NULL );
	
	geQuaternion_Add(Q0,Q1,&pPlusQ);
	geQuaternion_Subtract(Q0,Q1,&pLessQ);
		
	geQuaternion_Multiply(&pPlusQ,&pPlusQ,&pPlusQ);
	geQuaternion_Multiply(&pLessQ,&pLessQ,&pLessQ);

	MagpLessQ=   (pLessQ.W * pLessQ.W) + (pLessQ.X * pLessQ.X) 
					  + (pLessQ.Y * pLessQ.Y) + (pLessQ.Z * pLessQ.Z);

	MagpPlusQ=   (pPlusQ.W * pPlusQ.W) + (pPlusQ.X * pPlusQ.X) 
					  + (pPlusQ.Y * pPlusQ.Y) + (pPlusQ.Z * pPlusQ.Z);

	if (MagpLessQ >= MagpPlusQ)
		{
			Q1->X = -Q1->X;
			Q1->Y = -Q1->Y;
			Q1->Z = -Q1->Z;
			Q1->W = -Q1->W;
		}
}

void GENESISCC geVKFrame_HermiteInterpolation(
	const void *KF1,		// pointer to first keyframe
	const void *KF2,		// pointer to second keyframe
	geFloat T,				// 0 <= T <= 1   blending parameter
	void *Result)			// put the result in here (geVec3d)
		// interpolates to get a vector between the two vectors at the two
		// keyframes where T==0 returns the vector for KF1 
		// and T==1 returns the vector for KF2
		// interpolates using 'hermite' blending
{
	geVec3d *Vec1,*Vec2;
	geVec3d *VNew = (geVec3d *)Result;
	
	assert( Result != NULL );
	assert( KF1 != NULL );
	assert( KF2 != NULL );
	
	assert( T >= (geFloat)0.0f );
	assert( T <= (geFloat)1.0f );
	
	if ( KF1 == KF2 )
		{
			*VNew = ((geVKFrame_Hermite *)KF1)->Key.V;
			return;
		}

	Vec1 = &( ((geVKFrame_Hermite *)KF1)->Key.V);
	Vec2 = &( ((geVKFrame_Hermite *)KF2)->Key.V);

	{
		geFloat	t2;			// T sqaured
		geFloat	t3;			// T cubed
		geFloat   H1,H2,H3,H4;	// hermite basis function coefficients

		t2 = T * T;
		t3 = t2 * T;
	
		H2 = -(t3 + t3) + t2*3.0f;
		H1 = 1.0f - H2;
		H4 = t3 - t2;
		H3 = H4 - t2 + T;   //t3 - 2.0f * t2 + t;
		
		geVec3d_Scale(Vec1,H1,VNew);
		geVec3d_AddScaled(VNew,Vec2,H2,VNew);
		geVec3d_AddScaled(VNew,&( ((geVKFrame_Hermite *)KF1)->DDerivative),H3,VNew);
		geVec3d_AddScaled(VNew,&( ((geVKFrame_Hermite *)KF2)->SDerivative),H4,VNew);
	}
}

void GENESISCC geVKFrame_HermiteRecompute(
	int Looped,				 // if keylist has the first key connected to last key
	geBoolean ZeroDerivative,// if each key should have a zero derivatives (good for 2 point S curves)
	geTKArray *KeyList)		 // list of keys to recompute hermite values for
	// rebuild precomputed data for keyframe list.
{
	// compute the incoming and outgoing derivatives at each keyframe
	int i;
	geVec3d V0,V1,V2;
	geFloat Time0, Time1, Time2, N0, N1, N0N1;
	geVKFrame_Hermite *TK;
	geVKFrame_Hermite *Vector= NULL;
	int count;
	int Index0,Index1,Index2;

	assert( KeyList != NULL );
	assert( sizeof(geVKFrame_Hermite) == geTKArray_ElementSize(KeyList) );
	
			
	// Compute derivatives at the keyframe points:
	// The derivative is the average of the source chord p[i]-p[i-1]
	// and the destination chord p[i+1]-p[i]
	//     (where i is Index1 in this function)
	//  D = 1/2 * ( p[i+1]-p[i-1] ) = 1/2 *( (p[i+1]-p[i]) + (p[i]-p[i-1]) )
	//  The very first and last chords are simply the 
	// destination and source derivative.
	//   These 'averaged' D's are adjusted for variences in the time scale
	// between the Keyframes.  To do this, the derivative at each keyframe
	// is split into two parts, an incoming ('source' DS) 
	// and an outgoing ('destination' DD) derivative.
	// DD[i] = DD[i] * 2 * N[i]  / ( N[i-1] + N[i] )   
	// DS[i] = DS[i] * 2 * N[i-1]/ ( N[i-1] + N[i] )
	//    where N[i] is time between keyframes i and i+1
	// Since the chord dealt with on a given chord between key[i] and key[i+1], only
	// one of the derivates are needed for each keyframe.  For key[i] the outgoing
	// derivative at is needed (DD[i]).  For key[i+1], the incoming derivative
	// is needed (DS[i+1])   ( note that  (1/2) * 2 = 1 )
	count = geTKArray_NumElements(KeyList);
	if (count > 0)
		{
			Vector = (geVKFrame_Hermite *)geTKArray_Element(KeyList,0);
		}

	if (ZeroDerivative!=GE_FALSE)
		{	// in this case, just bang all derivatives to zero.
			for (i =0; i< count; i++)
				{
					TK = &(Vector[i]);
					geVec3d_Clear(&(TK->DDerivative));
					geVec3d_Clear(&(TK->SDerivative));
				}
			return;
		}

	if (count < 3)			
		{
			Looped = GE_FALSE;	
			// cant compute slopes without a closed loop: 
			// so compute slopes as if it is not closed.
		}
	for (i =0; i< count; i++)
		{
			TK = &(Vector[i]);
			Index0 = i-1;
			Index1 = i;
			Index2 = i+1;

			Time1 = Vector[Index1].Key.Time;
			if (Index1 == 0)
				{
					if (Looped != GE_TRUE)
						{
							Index0 = 0;			
							Time0 = Vector[Index0].Key.Time;
						}
					else
						{
							Index0 = count-2;
							Time0 = Time1 - (Vector[count-1].Key.Time - Vector[count-2].Key.Time);
						}
				}
			else
				{
					Time0 = Vector[Index0].Key.Time;
				}


			if (Index2 == count)
				{
					if (Looped != GE_TRUE)
						{
							Index2 = count-1;
							Time2 = Vector[Index2].Key.Time;
						}
					else
						{
							Index2 = 1;
							Time2 = Time1 + (Vector[1].Key.Time - Vector[0].Key.Time);
						}
				}
			else
				{
					Time2 = Vector[Index2].Key.Time;
				}

			V0 = Vector[Index0].Key.V;
			V1 = Vector[Index1].Key.V;
			V2 = Vector[Index2].Key.V;

			N0    = (Time1 - Time0);
			N1    = (Time2 - Time1);
			N0N1  = N0 + N1;

			if (( Looped != GE_TRUE) && (Index1 == 0) )
				{
					geVec3d_Subtract(&V2,&V1,&(TK->SDerivative));
					geVec3d_Copy( &(TK->SDerivative), &(TK->DDerivative));
				}
			else if (( Looped != GE_TRUE) && (Index1 == count-1))
				{
					geVec3d_Subtract(&V1,&V0,&(TK->SDerivative));
					geVec3d_Copy( &(TK->SDerivative), &(TK->DDerivative));
				}
			else
			{
				geVec3d Slope;
				geVec3d_Subtract(&V2,&V0,&Slope);
				geVec3d_Scale(&Slope, (N1 / N0N1), &(TK->DDerivative));
				geVec3d_Scale(&Slope, (N0 / N0N1), &(TK->SDerivative));
			}
		}	
}

static void GENESISCC gePose_SetAttachmentRotationFlag( gePose_Joint *Joint)
{
	geQuaternion Q = Joint->AttachmentRotation;
#define GE_POSE_ROTATION_THRESHOLD (0.0001)  // if the rotation is closer than this to zero for
										     // quaterion elements X,Y,Z -> no rotation computed
	if (     (  (Q.X<GE_POSE_ROTATION_THRESHOLD) && (Q.X>-GE_POSE_ROTATION_THRESHOLD) ) 
		  && (  (Q.Y<GE_POSE_ROTATION_THRESHOLD) && (Q.Y>-GE_POSE_ROTATION_THRESHOLD) ) 
		  && (  (Q.Z<GE_POSE_ROTATION_THRESHOLD) && (Q.Z>-GE_POSE_ROTATION_THRESHOLD) )  )
		{
			Joint->NoAttachmentRotation = GE_TRUE;
		}
	else
		{
			Joint->NoAttachmentRotation = GE_FALSE;
		}
}

static void GENESISCC gePose_JointRelativeToParent(
		 const gePose_Joint *Parent,
		 gePose_Joint *J)
{
	
	#if 0
		// the math in clearer (but slower) matrix form.
		// W = PAK
		geXForm3d X;
		geXForm3d K;

		geQuaternion_ToMatrix(&(J->LocalRotation),&K);
		K.Translation = J->LocalTranslation;

		geXForm3d_Multiply((Parent->Transform),&(J->AttachmentTransform),&X);
		geXForm3d_Multiply(&X,&(K),J->Transform);
		
		J->LocalTranslation = K.Translation;
		geQuaternion_FromMatrix(J->Transform,&(J->LocalRotation));

	#endif


	geVec3d *Translation = &(J->Transform->Translation);
	if (J->NoAttachmentRotation != GE_FALSE)
		{
			//    ( no attachment rotation )
			//ROTATION:
			// concatenate local rotation to parent rotation for complete rotation
			geQuaternion_Multiply(&(Parent->Rotation), &(J->LocalRotation), &(J->Rotation));
			
			geQuaternion_ToMatrix(&(J->Rotation), (J->Transform));
			//TRANSLATION:
			geVec3d_Add(&(J->LocalTranslation),&(J->AttachmentTransform.Translation),Translation);
			geXForm3d_Transform((Parent->Transform),Translation,Translation);
		}
	else
		{
			//  (there is an attachment rotation)
			
			geQuaternion BaseRotation; // attachement transform applied to the parent transform:
			//ROTATION:
			// concatenate attachment rotation to parent rotation for base rotation
			geQuaternion_Multiply(&(Parent->Rotation),&(J->AttachmentRotation),&BaseRotation);
			// concatenate base rotation with local rotation for complete rotation
			geQuaternion_Multiply(&BaseRotation, &(J->LocalRotation), &(J->Rotation));

			geQuaternion_ToMatrix(&(J->Rotation), (J->Transform));

			//TRANSLATION:
			geXForm3d_Transform(&(J->AttachmentTransform),&(J->LocalTranslation),Translation);
			geXForm3d_Transform((Parent->Transform),Translation,Translation);
		}
}

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
