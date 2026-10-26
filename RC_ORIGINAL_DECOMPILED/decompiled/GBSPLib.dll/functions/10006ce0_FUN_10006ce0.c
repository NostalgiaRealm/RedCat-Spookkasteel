/*
 * FUN_10006ce0 at 10006ce0
 * undefined FUN_10006ce0(void)
 * Address ranges: 10006ce0-10006d85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006ce0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(int *)(param_1 + 0x70) = DAT_1014e2c0;
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    return;
  }
  do {
    if (((((char)piVar1[9] != '\0') && (piVar1[0x11] == 0)) && (piVar1[0xf] == 0)) &&
       ((piVar1[0x10] == 0 && (0 < piVar1[0xd])))) {
      piVar1[0xc] = DAT_1014e27c;
      piVar1[10] = DAT_1014e2c0;
      iVar2 = 0;
      if (0 < piVar1[0xd]) {
        do {
          *(undefined4 *)(DAT_1014e314 + DAT_1014e27c * 4) =
               *(undefined4 *)(piVar1[0xb] + iVar2 * 4);
          DAT_1014e27c = DAT_1014e27c + 1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < piVar1[0xd]);
      }
      DAT_1014e2c0 = DAT_1014e2c0 + 1;
      iVar3 = iVar3 + 1;
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  *(int *)(param_1 + 0x74) = iVar3;
  return;
}

