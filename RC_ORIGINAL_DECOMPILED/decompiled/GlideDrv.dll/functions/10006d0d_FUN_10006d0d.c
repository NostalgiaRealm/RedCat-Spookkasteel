/*
 * FUN_10006d0d at 10006d0d
 * undefined __cdecl FUN_10006d0d(char * param_1)
 * Address ranges: 10006d0d-10006d66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10006d0d(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10009100((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_100110f0 < 2) {
        uVar3 = (byte)PTR_DAT_10010ee0[*param_1 * 2] & 4;
        this = PTR_DAT_10010ee0;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1000908b(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_100110f4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

