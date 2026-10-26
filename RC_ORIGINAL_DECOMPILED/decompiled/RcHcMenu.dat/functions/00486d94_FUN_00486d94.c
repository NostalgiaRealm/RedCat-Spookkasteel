/*
 * FUN_00486d94 at 00486d94
 * undefined __register FUN_00486d94(int param_1, char param_2)
 * Address ranges: 00486d94-00486df2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00486d94(int param_1,char param_2)

{
  int *piVar1;
  
  if (param_2 == '\0') {
    if (*(int **)(param_1 + 0x1bc) != (int *)0x0) {
      FUN_00403094(*(int **)(param_1 + 0x1bc));
      *(undefined4 *)(param_1 + 0x1bc) = 0;
    }
  }
  else if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x1bc) == 0)) {
    piVar1 = FUN_0047f92c((int *)&DAT_0047d3d0,'\x01',param_1,'\x01',0x486e28,param_1,0x10,
                          *(undefined4 *)(param_1 + 0x1b8),0x19,*(int *)(param_1 + 0x168));
    *(int **)(param_1 + 0x1bc) = piVar1;
  }
  return;
}

