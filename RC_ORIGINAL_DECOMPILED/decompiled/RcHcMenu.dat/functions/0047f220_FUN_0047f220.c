/*
 * FUN_0047f220 at 0047f220
 * undefined __register FUN_0047f220(int param_1, int param_2)
 * Address ranges: 0047f220-0047f34d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047f220(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 extraout_ECX;
  undefined1 *puVar3;
  undefined1 *extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28;
  undefined *local_24;
  VARIANTARG local_20;
  int local_c;
  
  puVar3 = &stack0xfffffffc;
  local_28 = 0;
  local_24 = (undefined *)0x0;
  puStack_38 = (undefined1 *)0x47f248;
  FUN_004047ac((undefined4 *)&local_20,&DAT_004010ec,5);
  puStack_3c = &LAB_0047f34e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  FUN_00403fe0((int *)&local_24,(char *)(param_2 + 0x127),0x20);
  iVar1 = FUN_00472108(param_1,local_24);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x84) != 0)) {
    FUN_0047f0c8(*(undefined4 *)(iVar1 + 0x84),extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    local_c = -1;
    uVar4 = extraout_EDX_00;
    do {
      local_c = local_c + 1;
      FUN_0047f0d4(&local_28,uVar4,puVar3,(int)&stack0xfffffffc);
      FUN_00403e48((int *)((int)&local_20.n1 + local_c * 4),local_28);
      if (*(int *)((int)&local_20.n1 + local_c * 4) == 0) break;
      puVar3 = extraout_ECX_00;
      uVar4 = extraout_EDX_01;
    } while (local_c != 4);
    if (local_c != 4) {
      local_c = local_c + -1;
      pcVar2 = FUN_0047f1ec();
      FUN_0040a170((char *)(param_2 + 0x147),pcVar2);
      pcVar2 = FUN_0047f1ec();
      FUN_0040a170((char *)(param_2 + 0x22),pcVar2);
      pcVar2 = FUN_0047f1ec();
      FUN_0040a170((char *)(param_2 + 2),pcVar2);
    }
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0047f355;
  puStack_3c = (undefined1 *)0x47f33a;
  FUN_00403dd4(&local_28,2);
  puStack_3c = (undefined1 *)0x47f34d;
  FUN_00404878(&local_20,&DAT_004010ec,5);
  return;
}

