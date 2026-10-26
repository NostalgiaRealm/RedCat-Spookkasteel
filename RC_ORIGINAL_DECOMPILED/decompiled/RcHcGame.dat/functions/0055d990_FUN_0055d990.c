/*
 * FUN_0055d990 at 0055d990
 * undefined FUN_0055d990(void)
 * Address ranges: 0055d990-0055da2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0055d990(uint param_1,char *param_2,char *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  char *_Str;
  byte bVar4;
  uint local_4;
  
  uVar3 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_006c8d98)) {
    bVar1 = 0;
    local_4 = 0;
    if ((&DAT_006ba8f4)[param_1 * 0x2df] != 0) {
      _Str = &DAT_006ba948 + param_1 * 0xb7c;
      do {
        pcVar2 = _strstr(_Str,param_2);
        bVar4 = pcVar2 != (char *)0x0;
        pcVar2 = _strstr(_Str,param_3);
        if (pcVar2 != (char *)0x0) {
          bVar4 = bVar4 + 1;
        }
        if (bVar1 < bVar4) {
          local_4 = uVar3;
          bVar1 = bVar4;
        }
        uVar3 = uVar3 + 1;
        _Str = _Str + 0x81;
      } while (uVar3 < (uint)(&DAT_006ba8f4)[param_1 * 0x2df]);
    }
    return local_4;
  }
  return 0;
}

