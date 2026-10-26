/*
 * FUN_005de3d0 at 005de3d0
 * undefined FUN_005de3d0(void)
 * Address ranges: 005de3d0-005de413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_005de3d0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005cf3b0(param_1 * param_2 + 8);
  if (piVar1 == (int *)0x0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0894,0x79,
                 &DAT_006b3f70,0);
    return (int *)0x0;
  }
  piVar1[1] = param_1;
  *piVar1 = param_2;
  return piVar1;
}

