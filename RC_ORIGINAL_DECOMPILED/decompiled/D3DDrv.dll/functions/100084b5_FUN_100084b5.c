/*
 * FUN_100084b5 at 100084b5
 * undefined __cdecl FUN_100084b5(char * param_1)
 * Address ranges: 100084b5-1000850e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100084b5(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_1000b678((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10015ce8 < 2) {
        uVar3 = (byte)PTR_DAT_10015cf4[*param_1 * 2] & 4;
        this = PTR_DAT_10015cf4;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1000b603(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10015cec;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

