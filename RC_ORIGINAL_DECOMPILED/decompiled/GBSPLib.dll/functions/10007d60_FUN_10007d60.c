/*
 * FUN_10007d60 at 10007d60
 * undefined FUN_10007d60(void)
 * Address ranges: 10007d60-10007dc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10007d60(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  do {
    if (param_1 == (int *)0x0) {
LAB_10007dab:
      (*DAT_1014e358)(s_FindLeaf__NULL_Node_Leaf__10037a94);
      return (int *)0x0;
    }
    iVar1 = *param_1;
    if (iVar1 == -1) {
      if (param_1 != (int *)0x0) {
        return param_1;
      }
      goto LAB_10007dab;
    }
    fVar2 = (float10)FUN_100143d0();
    if (fVar2 - (float10)(float)(&DAT_1003fe04)[iVar1 * 5] <= (float10)0.0) {
      param_1 = (int *)param_1[5];
    }
    else {
      param_1 = (int *)param_1[4];
    }
  } while( true );
}

