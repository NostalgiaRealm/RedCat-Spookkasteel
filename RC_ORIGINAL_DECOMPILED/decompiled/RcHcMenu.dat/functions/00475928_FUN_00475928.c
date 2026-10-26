/*
 * FUN_00475928 at 00475928
 * undefined __register FUN_00475928(int param_1, int * param_2)
 * Address ranges: 00475928-00475a3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475928(int param_1,int *param_2)

{
  char *pcVar1;
  undefined4 extraout_ECX;
  undefined1 *puVar2;
  undefined1 *extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  VARIANTARG local_20;
  int local_c;
  
  puVar2 = &stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  puStack_40 = (undefined1 *)0x475956;
  FUN_004047ac((undefined4 *)&local_20,&DAT_004010ec,5);
  puStack_44 = &LAB_00475a40;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  if (param_1 != 0) {
    puStack_40 = &stack0xfffffffc;
    FUN_004757d0(param_1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    local_c = -1;
    uVar3 = extraout_EDX_00;
    do {
      local_c = local_c + 1;
      FUN_004757dc(&local_24,uVar3,puVar2,(int)&stack0xfffffffc);
      FUN_00403e48((int *)((int)&local_20.n1 + local_c * 4),local_24);
      if (*(int *)((int)&local_20.n1 + local_c * 4) == 0) break;
      puVar2 = extraout_ECX_00;
      uVar3 = extraout_EDX_01;
    } while (local_c != 4);
    if (local_c != 4) {
      local_c = local_c + -1;
      pcVar1 = FUN_004758f4();
      FUN_0040a34c(pcVar1,(int *)&local_28);
      FUN_00403e04(param_2 + 2,local_28);
      pcVar1 = FUN_004758f4();
      FUN_0040a34c(pcVar1,(int *)&local_2c);
      FUN_00403e04(param_2 + 1,local_2c);
      pcVar1 = FUN_004758f4();
      FUN_0040a34c(pcVar1,(int *)&local_30);
      FUN_00403e04(param_2,local_30);
    }
  }
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00475a47;
  puStack_44 = (undefined1 *)0x475a2c;
  FUN_00403dd4((int *)&local_30,4);
  puStack_44 = (undefined1 *)0x475a3f;
  FUN_00404878(&local_20,&DAT_004010ec,5);
  return;
}

