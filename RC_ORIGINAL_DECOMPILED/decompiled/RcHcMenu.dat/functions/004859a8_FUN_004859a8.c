/*
 * FUN_004859a8 at 004859a8
 * undefined __register FUN_004859a8(int param_1)
 * Address ranges: 004859a8-00485a34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004859a8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  short local_247;
  ushort local_243;
  undefined2 local_241;
  undefined4 local_23b [118];
  short local_61;
  
  bVar5 = 0;
  sVar1 = thunk_FUN_00479a0b(*(undefined4 *)(param_1 + 0x168));
  if (sVar1 == 0) {
    *(bool *)(param_1 + 0x1b0) = local_247 != 0;
    *(bool *)(param_1 + 0x1b1) = local_61 != 0;
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      *(uint *)(param_1 + 0x1e0) = (uint)local_243;
      puVar3 = local_23b;
      puVar4 = (undefined4 *)(param_1 + 400);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
    }
    *(undefined2 *)(param_1 + 0x1b6) = local_241;
  }
  return;
}

