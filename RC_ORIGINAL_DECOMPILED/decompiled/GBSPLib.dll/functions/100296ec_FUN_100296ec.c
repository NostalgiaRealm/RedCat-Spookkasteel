/*
 * FUN_100296ec at 100296ec
 * undefined FUN_100296ec(void)
 * Address ranges: 100296ec-10029745
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100296ec(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_1003070f((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1003d32c < 2) {
        uVar4 = (byte)PTR_DAT_1003d120[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_1002c371((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1003d330;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

