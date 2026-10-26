/*
 * FUN_004458a0 at 004458a0
 * undefined __register FUN_004458a0(undefined4 * param_1, int * param_2)
 * Address ranges: 004458a0-00445935
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004458a0(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  FUN_00403e04(param_2,param_1);
  iVar3 = 1;
  do {
    iVar2 = FUN_00404030(*param_2);
    if (iVar2 < iVar3) {
      return;
    }
    bVar1 = *(byte *)(*param_2 + -1 + iVar3);
    if (((byte)PTR_DAT_005725fc[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
      if (bVar1 == 0x26) {
        if ((PTR_DAT_0057261c[8] != '\0') && (1 < iVar3)) {
          iVar2 = FUN_00404030(*param_2);
          if ((1 < iVar2 - iVar3) &&
             ((*(char *)(*param_2 + -2 + iVar3) == '(' && (*(char *)(*param_2 + 1 + iVar3) == ')')))
             ) {
            FUN_00404278(param_2,iVar3 + -1,4);
            goto LAB_00445927;
          }
        }
        FUN_00404278(param_2,iVar3,1);
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
LAB_00445927:
    iVar3 = iVar3 + 1;
  } while( true );
}

