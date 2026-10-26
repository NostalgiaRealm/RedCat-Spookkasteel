/*
 * FUN_0043abf0 at 0043abf0
 * undefined __register FUN_0043abf0(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 0043abf0-0043ac63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043abf0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int local_1c [4];
  
  bVar6 = 0;
  piVar5 = local_1c;
  iVar1 = FUN_0043ab70(param_1,param_2,(int)param_3);
  if (iVar1 == 0) {
    FUN_00402cfc(param_3,0x10,0);
  }
  else {
    iVar2 = FUN_0043a5c0(iVar1,'\x01');
    iVar3 = FUN_0043a5c0(iVar1,'\x02');
    iVar4 = FUN_0043a554(iVar1,'\x01');
    iVar1 = FUN_0043a554(iVar1,'\x02');
    FUN_00411640(iVar1,iVar4,iVar3,piVar5,iVar2);
    piVar5 = local_1c;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *piVar5;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      param_3 = param_3 + (uint)bVar6 * -2 + 1;
    }
  }
  return;
}

