/*
 * FUN_00438034 at 00438034
 * undefined __register FUN_00438034(int param_1, undefined4 param_2)
 * Address ranges: 00438034-00438071
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438034(int param_1,undefined4 param_2)

{
  bool bVar1;
  BOOL BVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  
  uVar3 = (undefined2)((uint)param_2 >> 0x10);
  if (((*(byte *)(param_1 + 0x40) & 0x10) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    bVar1 = FUN_00438c84(param_1);
    uVar3 = extraout_var;
    if (bVar1) {
      BVar2 = IsWindowVisible(*(HWND *)(param_1 + 0x14c));
      uVar3 = extraout_var_00;
      if (BVar2 != 0) {
        FUN_00438890(param_1);
        uVar3 = extraout_var_01;
      }
    }
  }
  FUN_004357fc(param_1,CONCAT22(uVar3,0xb011));
  return;
}

