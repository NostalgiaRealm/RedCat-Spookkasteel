/*
 * FUN_005e0480 at 005e0480
 * undefined FUN_005e0480(void)
 * Address ranges: 005e0480-005e0522
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_005e0480(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_005cf3b0(8);
  if (piVar1 == (int *)0x0) {
    FUN_005cf220(0x65,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0a1c,0x2b,&DAT_006b3f70,0
                );
    return (int *)0x0;
  }
  iVar2 = FUN_005cf3b0(param_1 * 0x30);
  piVar1[1] = iVar2;
  if (iVar2 == 0) {
    FUN_005cf220(0x65,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b0a1c,0x31,&DAT_006b3f70,0
                );
    FUN_005cf400(piVar1);
    _DAT_007203c0 = 0;
    return (int *)0x0;
  }
  *piVar1 = param_1;
  FUN_005b30c0();
  FUN_005e0590();
  return piVar1;
}

