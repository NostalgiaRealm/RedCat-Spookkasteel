/*
 * FUN_00513340 at 00513340
 * undefined FUN_00513340(void)
 * Address ranges: 00513340-00513412
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00513340(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x1ac) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0x1ac) >> 2;
    }
    if (iVar1 <= iVar3) break;
    piVar2 = (int *)FUN_005144a0(iVar3);
    if (*piVar2 == param_2) {
      FUN_005145b0(iVar3);
      if (param_2 == *(int *)(param_1 + 0x1dc)) {
        if ((*(int *)(param_1 + 0x1ac) != 0) &&
           (0 < (int)(*(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0x1ac) & 0xfffffffcU))) {
          do {
            iVar3 = *(int *)(param_1 + 0x1dc) + 1;
            *(int *)(param_1 + 0x1dc) = iVar3;
            if (0xff < iVar3) {
              *(undefined4 *)(param_1 + 0x1dc) = 0;
            }
            iVar3 = 0;
            while( true ) {
              if (*(int *)(param_1 + 0x1ac) == 0) {
                iVar1 = 0;
              }
              else {
                iVar1 = *(int *)(param_1 + 0x1b0) - *(int *)(param_1 + 0x1ac) >> 2;
              }
              if (iVar1 <= iVar3) break;
              piVar2 = (int *)FUN_005144a0(iVar3);
              if (*piVar2 == *(int *)(param_1 + 0x1dc)) {
                return;
              }
              iVar3 = iVar3 + 1;
            }
          } while( true );
        }
        iVar3 = *(int *)(param_1 + 0x1dc) + 1;
        *(int *)(param_1 + 0x1dc) = iVar3;
        if (0xff < iVar3) {
          *(undefined4 *)(param_1 + 0x1dc) = 0;
        }
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1dc);
      }
      return;
    }
    iVar3 = iVar3 + 1;
  }
  return;
}

