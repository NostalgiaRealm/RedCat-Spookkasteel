/*
 * FUN_10001b90 at 10001b90
 * undefined FUN_10001b90(void)
 * Address ranges: 10001b90-10001c20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001b90(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 unaff_retaddr;
  int local_7c [31];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  local_7c[2] = 0;
  local_7c[0] = 0x7c;
  local_7c[3] = 0;
  local_7c[1] = 6;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x58))(*(int **)(param_1 + 0xc),local_7c);
  uVar1 = *(int *)(param_1 + 0x30) * local_7c[0];
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = CONCAT22(CONCAT11(unaff_retaddr,unaff_retaddr),CONCAT11(unaff_retaddr,unaff_retaddr));
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = unaff_retaddr;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return 1;
}

