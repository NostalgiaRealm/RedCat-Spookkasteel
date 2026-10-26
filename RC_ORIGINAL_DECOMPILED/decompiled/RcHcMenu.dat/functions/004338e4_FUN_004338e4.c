/*
 * FUN_004338e4 at 004338e4
 * undefined __register FUN_004338e4(int param_1, int * param_2)
 * Address ranges: 004338e4-00433964
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004338e4(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_2;
  if (iVar2 == 0xc) {
    uVar3 = FUN_0040a380((char *)param_2[2]);
    FUN_0040a3ac(*(int *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    FUN_00432314(param_1,*param_2,param_2[1],param_2[2]);
  }
  else if (iVar2 == 0xd) {
    pcVar1 = *(char **)(param_1 + 0x54);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    pcVar1 = FUN_0040a198((char *)param_2[2],pcVar1,param_2[1] + -1);
    iVar2 = FUN_0040a108(pcVar1);
    param_2[3] = iVar2;
  }
  else if (iVar2 == 0xe) {
    if (*(char **)(param_1 + 0x54) == (char *)0x0) {
      param_2[3] = 0;
    }
    else {
      iVar2 = FUN_0040a108(*(char **)(param_1 + 0x54));
      param_2[3] = iVar2;
    }
  }
  return;
}

