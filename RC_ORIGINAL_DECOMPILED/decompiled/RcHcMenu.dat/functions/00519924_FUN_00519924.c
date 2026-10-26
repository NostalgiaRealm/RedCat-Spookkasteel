/*
 * FUN_00519924 at 00519924
 * undefined __register FUN_00519924(int * param_1, WPARAM param_2)
 * Address ranges: 00519924-00519991
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00519924(int *param_1,WPARAM param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  char cVar4;
  undefined4 extraout_EDX;
  
  if (((-1 < (int)param_2) &&
      (iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x14))(), (int)param_2 < iVar2)) &&
     (bVar1 = FUN_005197d0(param_1,param_2), bVar1 != 0)) {
    uVar3 = FUN_005197fc(param_1,param_2);
    cVar4 = (char)uVar3;
    if (cVar4 == '\0') {
      if ((char)param_1[0x8e] == '\0') {
        cVar4 = '\x01';
      }
      else {
        cVar4 = '\x02';
      }
    }
    else if (cVar4 == '\x01') {
      cVar4 = '\0';
    }
    else if (cVar4 == '\x02') {
      cVar4 = '\x01';
    }
    FUN_005196fc(param_1,param_2,cVar4);
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}

