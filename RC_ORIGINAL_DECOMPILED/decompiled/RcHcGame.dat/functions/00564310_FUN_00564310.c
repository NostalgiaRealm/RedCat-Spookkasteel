/*
 * FUN_00564310 at 00564310
 * undefined FUN_00564310(void)
 * Address ranges: 00564310-005644aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00564310(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x218);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x1cc);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 0x218) = iVar2;
  }
  FUN_005642e0(1,iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0x284);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x238);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 0x284) = iVar2;
  }
  FUN_005642e0(2,iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0x2f0);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x2a4);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 0x2f0) = iVar2;
  }
  FUN_005642e0(4,iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0x35c);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x310);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 0x35c) = iVar2;
  }
  FUN_005642e0(8,iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0x3c8);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x37c);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 0x3c8) = iVar2;
  }
  FUN_005642e0(0x10,iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0x434);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 1000);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 0x434) = iVar2;
  }
  FUN_005642e0(0x20,iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0x4a0);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x454);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 0x4a0) = iVar2;
  }
  FUN_005642e0(0x40,iVar2 != 0);
  return;
}

