/*
 * FUN_004f6ff0 at 004f6ff0
 * undefined __register FUN_004f6ff0(int * param_1, int param_2)
 * Address ranges: 004f6ff0-004f7048
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6ff0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar5;
  
  FUN_00437dac(param_1,param_2);
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    iVar2 = FUN_0041300c(param_1[0x7c]);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        iVar3 = FUN_004f6c58(param_1[0x7c],iVar5);
        if (*(char *)(iVar3 + 0x25) != '\0') {
          piVar4 = (int *)FUN_004f6c58(param_1[0x7c],iVar5);
          FUN_004f6a78(piVar4,extraout_EDX,extraout_ECX);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

