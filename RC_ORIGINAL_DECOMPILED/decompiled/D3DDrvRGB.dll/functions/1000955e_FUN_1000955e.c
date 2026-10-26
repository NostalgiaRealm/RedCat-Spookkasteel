/*
 * FUN_1000955e at 1000955e
 * undefined __cdecl FUN_1000955e(char * param_1)
 * Address ranges: 1000955e-100095b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000955e(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_1000d664((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_100191b0 < 2) {
        uVar3 = (byte)PTR_DAT_100191bc[*param_1 * 2] & 4;
        this = PTR_DAT_100191bc;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1000d5ef(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_100191b4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

