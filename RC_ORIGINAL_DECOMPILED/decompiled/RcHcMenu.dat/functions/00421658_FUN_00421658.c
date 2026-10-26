/*
 * FUN_00421658 at 00421658
 * undefined __register FUN_00421658(int * param_1, uint param_2)
 * Address ranges: 00421658-00421701;00421728-00421737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00421658(int *param_1,uint param_2)

{
  COLORREF CVar1;
  HPALETTE pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60 [21];
  HPALETTE local_c;
  HANDLE local_8;
  
  puStack_70 = &stack0xfffffffc;
  local_8 = (HANDLE)0x0;
  local_c = (HPALETTE)0x0;
  puStack_74 = &LAB_00421702;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  FUN_00421638((int)param_1);
  FUN_00421648((int)param_1);
  CVar1 = FUN_0041b688(param_2);
  local_8 = (HANDLE)FUN_00420d18(*(HPALETTE *)(param_1[8] + 8),*(HPALETTE *)(param_1[8] + 0x10),
                                 CVar1);
  FUN_00402cfc(local_60,0x54,0);
  GetObjectA(local_8,0x54,local_60);
  pHVar2 = *(HPALETTE *)(param_1[8] + 0x10);
  if (pHVar2 != DAT_00573650) {
    pHVar2 = FUN_00420cb4(pHVar2);
  }
  local_c = pHVar2;
  uVar3 = 0;
  FUN_00421958((int)param_1,local_8,local_c,(int *)0x0,*(undefined1 *)(param_1[8] + 0x70),local_60);
  *in_FS_OFFSET = uVar3;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

