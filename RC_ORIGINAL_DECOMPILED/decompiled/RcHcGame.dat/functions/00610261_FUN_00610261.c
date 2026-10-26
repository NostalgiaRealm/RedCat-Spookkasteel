/*
 * FUN_00610261 at 00610261
 * undefined FUN_00610261(void)
 * Address ranges: 00610261-006102ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00610261(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_0060bbcc((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_006b28bc < 2) {
        uVar4 = (byte)PTR_DAT_006b26b0[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_0060e0ee((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_006b28c0;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

