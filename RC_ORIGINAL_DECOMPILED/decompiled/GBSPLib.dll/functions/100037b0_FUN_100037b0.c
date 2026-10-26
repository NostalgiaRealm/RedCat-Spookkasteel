/*
 * FUN_100037b0 at 100037b0
 * undefined FUN_100037b0(void)
 * Address ranges: 100037b0-10003858
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100037b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  puVar1 = param_2;
  do {
    puVar2 = param_2;
    if (puVar1 == (undefined4 *)0x0) {
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
        iVar4 = 0;
        if (0 < (int)puVar2[10]) {
          piVar6 = puVar2 + 0xb;
          do {
            if (*piVar6 != 0) {
              FUN_1000c2e0(*piVar6);
              *piVar6 = 0;
            }
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 5;
          } while (iVar4 < (int)puVar2[10]);
        }
      }
      param_1[0x19] = param_2;
      return;
    }
    if ((*(byte *)(puVar1[9] + 0xc) & 1) != 0) {
      iVar4 = puVar1[10];
      iVar3 = 0;
      if (0 < iVar4) {
        pbVar5 = (byte *)(puVar1 + 0xf);
        do {
          if ((*pbVar5 & 0x10) == 0) break;
          iVar3 = iVar3 + 1;
          pbVar5 = pbVar5 + 0x14;
        } while (iVar3 < iVar4);
      }
      if (iVar3 == iVar4) {
        param_1[2] = param_1[2] | 1;
      }
    }
    param_1[2] = param_1[2] | *(uint *)(puVar1[9] + 0xc);
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

