/*
 * FUN_004378b4 at 004378b4
 * undefined __register FUN_004378b4(int * param_1, int param_2)
 * Address ranges: 004378b4-00437909
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004378b4(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar2 = DAT_0057374c;
  if (*(char *)(DAT_0057374c + 0x20) == '\0') {
    *(undefined1 *)(DAT_0057374c + 0x20) = 1;
    iVar2 = FUN_0043cbb8(DAT_0057374c,0x68);
  }
  bVar1 = FUN_00448650(CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(param_2 + 4)));
  *(byte *)(param_2 + 4) = bVar1;
  FUN_00403270(param_1,param_2,extraout_ECX);
  if (*(int *)(param_2 + 0xc) == 0) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}

