/*
 * FUN_00406ed4 at 00406ed4
 * char __register FUN_00406ed4(undefined * param_1)
 * Address ranges: 00406ed4-00406f46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00406ed4(undefined *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) != 0xd7b1) {
    if (param_1 == &DAT_00573050) {
      FUN_00407043(&DAT_00573050);
      param_1 = &DAT_00573050;
      if (DAT_00573054 == 0xd7b1) goto LAB_00406edd;
    }
    FUN_004028d8(0x68);
    return '\x1a';
  }
LAB_00406edd:
  uVar3 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0x10) <= uVar3) {
    iVar2 = (**(code **)(param_1 + 0x1c))();
    if (iVar2 != 0) {
      FUN_004028d8(iVar2);
      return '\x1a';
    }
    uVar3 = *(uint *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 0x10) <= uVar3) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + uVar3) = 0x1a;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return '\x1a';
    }
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x14) + uVar3);
  if (cVar1 != '\x1a') {
    *(uint *)(param_1 + 0xc) = uVar3 + 1;
  }
  return cVar1;
}

