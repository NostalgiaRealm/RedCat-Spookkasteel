/*
 * FUN_00480c80 at 00480c80
 * undefined FUN_00480c80(void)
 * Address ranges: 00480c80-00480cc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00480c80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00480cd0(0,&CAdamHUD::RTTI_Type_Descriptor,&CRcHUD::RTTI_Type_Descriptor,0);
  iVar2 = FUN_0060a6f2(uVar1);
  if (iVar2 != 0) {
    FUN_004535f0(*(undefined4 *)(param_1 + 0x50));
  }
  FUN_00436a10();
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

