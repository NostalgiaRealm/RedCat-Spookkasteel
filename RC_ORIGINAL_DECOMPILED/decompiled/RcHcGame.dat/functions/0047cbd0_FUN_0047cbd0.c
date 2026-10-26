/*
 * FUN_0047cbd0 at 0047cbd0
 * undefined FUN_0047cbd0(void)
 * Address ranges: 0047cbd0-0047cda1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0047cbd0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x24);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x4d0) = *puVar2;
    *(undefined4 *)(param_1 + 0x4d4) = puVar2[1];
    *(undefined4 *)(param_1 + 0x4d8) = puVar2[2];
  }
  uVar4 = (uint)(puVar2 != (undefined4 *)0x0);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x28);
  uVar3 = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = uVar4 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar4 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x2c);
  uVar4 = uVar3;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = uVar3 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar3 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x30);
  uVar3 = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = uVar4 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar4 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x34);
  uVar4 = uVar3;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = uVar3 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar3 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x38);
  uVar3 = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = uVar4 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar4 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x3c);
  uVar4 = uVar3;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = uVar3 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar3 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x40);
  uVar3 = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = uVar4 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar4 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x44);
  uVar4 = uVar3;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = uVar3 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar3 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x48);
  uVar3 = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = uVar4 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x4d0 + uVar4 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  if (10 < *(int *)(*(int *)(param_1 + 0xf8) + 0x20)) {
    *(undefined4 *)(*(int *)(param_1 + 0xf8) + 0x20) = 10;
  }
  uVar4 = *(uint *)(*(int *)(param_1 + 0xf8) + 0x20);
  if ((int)uVar4 < (int)uVar3) {
    uVar3 = uVar4;
  }
  FUN_0047ea70(param_1 + 0x4d0,uVar3);
  return;
}

