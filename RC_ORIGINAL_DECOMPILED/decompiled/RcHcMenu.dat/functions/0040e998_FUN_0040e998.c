/*
 * FUN_0040e998 at 0040e998
 * uint __register FUN_0040e998(undefined4 param_1, uint param_2, int param_3)
 * Address ranges: 0040e998-0040e9d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0040e998(undefined4 param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char cVar2;
  char unaff_BL;
  uint *puVar3;
  undefined1 *unaff_EDI;
  char *pcVar4;
  uint local_4;
  
  *unaff_EDI = (char)param_1;
  if (unaff_BL == '\0') {
    param_2 = 0;
LAB_0040e9ab:
    cVar2 = (char)((uint)param_1 >> 8);
    pcVar4 = unaff_EDI + 1;
    if (cVar2 == '\0') goto LAB_0040e9b2;
  }
  else {
    if (-1 < (int)param_2) goto LAB_0040e9ab;
    cVar2 = '-';
    param_2 = -param_2;
  }
  pcVar4 = unaff_EDI + 2;
  unaff_EDI[1] = cVar2;
LAB_0040e9b2:
  puVar3 = &local_4;
  local_4 = param_2;
  do {
    do {
      uVar1 = (ulonglong)param_2;
      param_2 = param_2 / 10;
      *(char *)puVar3 = (char)(uVar1 % 10) + '0';
      puVar3 = (uint *)((int)puVar3 + 1);
      param_3 = param_3 + -1;
    } while (param_2 != 0);
  } while (0 < param_3);
  do {
    puVar3 = (uint *)((int)puVar3 + -1);
    *pcVar4 = *(char *)puVar3;
    pcVar4 = pcVar4 + 1;
  } while (puVar3 != &local_4);
  return local_4;
}

