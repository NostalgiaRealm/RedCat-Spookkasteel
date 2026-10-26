/*
 * FUN_1001b19e at 1001b19e
 * undefined FUN_1001b19e(void)
 * Address ranges: 1001b19e-1001b1f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b19e(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_1001d020((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10024000 < 2) {
        uVar4 = (byte)PTR_DAT_10023df0[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_1001cfab((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10024004;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

