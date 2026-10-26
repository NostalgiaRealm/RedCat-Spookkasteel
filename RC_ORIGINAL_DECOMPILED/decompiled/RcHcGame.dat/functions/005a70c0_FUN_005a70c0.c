/*
 * FUN_005a70c0 at 005a70c0
 * undefined FUN_005a70c0(void)
 * Address ranges: 005a70c0-005a7129
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005a70c0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint local_10 [2];
  byte *pbStack_8;
  
  if (DAT_006cad44 != (int *)0x0) {
    uVar3 = 0x10;
    piVar2 = DAT_006cad44;
    iVar1 = (**(code **)(*DAT_006cad44 + 0x24))(DAT_006cad44,0x10,local_10);
    if (iVar1 == 0) {
      *pbStack_8 = (byte)local_10[0] >> 7;
      if ((local_10[0] & 0x8000) == 0) {
        pbStack_8[2] = 0;
      }
      else {
        pbStack_8[2] = 1;
      }
      if ((local_10[0] & 0x800000) == 0) {
        pbStack_8[1] = 0;
      }
      else {
        pbStack_8[1] = 1;
      }
      *(undefined4 *)(pbStack_8 + 0xc) = *(undefined4 *)(pbStack_8 + 4);
      *(undefined4 *)(pbStack_8 + 0x10) = *(undefined4 *)(pbStack_8 + 8);
      *(int **)(pbStack_8 + 4) = piVar2;
      *(undefined4 *)(pbStack_8 + 8) = uVar3;
    }
  }
  return;
}

