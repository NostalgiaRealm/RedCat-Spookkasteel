/*
 * FUN_00421f94 at 00421f94
 * undefined __register FUN_00421f94(int param_1, int * param_2, int param_3)
 * Address ranges: 00421f94-00422000
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00421f94(int param_1,int *param_2,int param_3)

{
  short local_70 [7];
  undefined4 local_62 [21];
  
  FUN_00421638(param_1);
  if (param_3 == 0) {
    FUN_00402cfc(local_62,0x54,0);
    FUN_00421958(param_1,0,0,(int *)0x0,0,local_62);
  }
  else {
    FUN_00414804(param_2,local_70,0xe);
    if (local_70[0] != 0x4d42) {
      FUN_0041d244();
    }
    FUN_00421a80(param_1,param_2,param_3 + -0xe);
  }
  return;
}

