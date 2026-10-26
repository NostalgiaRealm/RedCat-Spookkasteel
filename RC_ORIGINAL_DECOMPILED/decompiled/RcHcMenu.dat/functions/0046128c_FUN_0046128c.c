/*
 * FUN_0046128c at 0046128c
 * uint __register FUN_0046128c(undefined * param_1, int param_2)
 * Address ranges: 0046128c-00461303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0046128c(undefined *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_EBX;
  uint uVar4;
  int iVar5;
  
  uVar4 = unaff_EBX & 0xffffff00;
  iVar2 = FUN_00404030((int)param_1);
  if (0 < iVar2) {
    iVar5 = 1;
    do {
      cVar1 = param_1[iVar5 + -1];
      if (cVar1 == '!') {
        uVar4 = uVar4 | 1;
      }
      else if ((cVar1 == '>') && (iVar5 < param_2)) {
        uVar4 = uVar4 & 0xfffffffb;
        if ((iVar5 < 2) || (param_1[iVar5 + -2] != '<')) {
          uVar4 = uVar4 | 2;
        }
      }
      else if ((cVar1 == '<') && (iVar5 < param_2)) {
        uVar4 = uVar4 & 0xfffffffd | 4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar3 = FUN_00461138(param_1,param_2);
  if ((char)uVar3 == '\x01') {
    uVar4 = uVar4 | 8;
  }
  return uVar4;
}

