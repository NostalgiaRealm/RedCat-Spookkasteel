/*
 * FUN_004e1f5c at 004e1f5c
 * undefined __register FUN_004e1f5c(int * param_1, undefined4 param_2)
 * Address ranges: 004e1f5c-004e204a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e1f5c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  RECT local_20;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  local_c = (int *)FUN_0044b514((int)param_1);
  if (*(char *)((int)local_8 + 0x2e9) == '\0') {
    FUN_0041cad0(local_c,0,0);
    uVar1 = FUN_00432178(local_8);
    iVar3 = uVar1 - 1;
    if (SBORROW4(uVar1,1)) {
      thunk_FUN_00402874(uVar1);
      iVar3 = extraout_EDX;
    }
    FUN_0041ca70(local_c,iVar3,0);
    iVar3 = FUN_004321bc(local_8);
    uVar1 = iVar3 - 1;
    if (SBORROW4(iVar3,1)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    uVar2 = FUN_00432178(local_8);
    iVar3 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      thunk_FUN_00402874(uVar2);
      iVar3 = extraout_EDX_00;
    }
    FUN_0041ca70(local_c,iVar3,uVar1);
    uVar1 = FUN_004321bc(local_8);
    iVar3 = uVar1 - 1;
    if (SBORROW4(uVar1,1)) {
      thunk_FUN_00402874(uVar1);
      iVar3 = extraout_ECX;
    }
    FUN_0041ca70(local_c,0,iVar3);
    FUN_0041ca70(local_c,0,0);
  }
  else {
    FUN_0041c318((int *)local_c[5],local_8[0x18]);
    FUN_0041c434((int *)local_c[5],'\0');
    (**(code **)(*local_8 + 0x40))(local_8,&local_20);
    FUN_0041c9f8(local_c,&local_20);
    FUN_004d9114(local_8,local_c);
  }
  return;
}

