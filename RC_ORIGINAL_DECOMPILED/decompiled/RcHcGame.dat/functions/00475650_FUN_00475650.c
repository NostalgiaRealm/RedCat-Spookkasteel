/*
 * FUN_00475650 at 00475650
 * undefined FUN_00475650(void)
 * Address ranges: 00475650-00475710
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00475650(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x24);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x14920) = *puVar2;
    *(undefined4 *)(param_1 + 0x14924) = puVar2[1];
    *(undefined4 *)(param_1 + 0x14928) = puVar2[2];
  }
  uVar4 = (uint)(puVar2 != (undefined4 *)0x0);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x28);
  uVar3 = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = uVar4 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x14920 + uVar4 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x2c);
  uVar4 = uVar3;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = uVar3 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x14920 + uVar3 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 0x30);
  uVar3 = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = uVar4 + 1;
    puVar1 = (undefined4 *)(param_1 + 0x14920 + uVar4 * 0xc);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
  }
  if (uVar3 != 4) {
    *(uint *)(param_1 + 0x14950) = uVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x14950) = 4;
  return;
}

