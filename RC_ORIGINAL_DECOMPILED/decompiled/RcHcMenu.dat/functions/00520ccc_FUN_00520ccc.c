/*
 * FUN_00520ccc at 00520ccc
 * undefined __register FUN_00520ccc(int * param_1, int * param_2, int param_3)
 * Address ranges: 00520ccc-00520ebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00520ccc(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  HDC hdc;
  BOOL BVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar6;
  RECT *lprect;
  RECT local_44;
  RECT local_34;
  int local_24;
  byte local_1d;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  uVar2 = FUN_0051e5f0(param_1[0x9f]);
  uVar3 = uVar2 - 1;
  uVar5 = extraout_ECX;
  uVar6 = extraout_EDX;
  if (SBORROW4(uVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  if (-1 < (int)uVar3) {
    local_24 = uVar3 + 1;
    local_1c = 0;
    do {
      local_18 = FUN_0051e404((int *)local_8[0x9f],local_1c);
      local_14 = local_10;
      FUN_00524ec4((int *)local_8[0x9d],&local_18,&local_34.left);
      local_1d = 0;
      cVar1 = FUN_00403270(local_8,extraout_EDX_01,extraout_ECX_01);
      if ((cVar1 != '\0') &&
         (((*(int *)(local_8[0x9d] + 0x214) == local_18 || ((char)local_8[0x8e] != '\0')) &&
          (*(int *)(local_8[0x9d] + 0x218) == local_14)))) {
        local_1d = local_1d | 2;
      }
      if (*(char *)((int)local_8 + 0x22d) == '\0') {
        if (((*(int *)(local_8[0x9d] + 0x214) == local_18) || ((char)local_8[0x8e] != '\0')) &&
           (*(int *)(local_8[0x9d] + 0x218) == local_14)) {
          local_1d = local_1d | 1;
        }
      }
      else {
        cVar1 = FUN_005163d0(*(int *)(local_8[0x9d] + 0x208),(int *)local_8[0xa0]);
        if (cVar1 != '\0') {
          local_1d = local_1d | 1;
        }
      }
      lprect = &local_34;
      hdc = (HDC)FUN_0041cf6c(local_c);
      BVar4 = RectVisible(hdc,lprect);
      uVar5 = extraout_ECX_02;
      uVar6 = extraout_EDX_02;
      if (BVar4 != 0) {
        (**(code **)(*local_8 + 0xc4))
                  (local_8,local_c,&local_18,CONCAT31((int3)((uint)&local_34 >> 8),local_1d),
                   &local_34);
        (**(code **)(*local_8 + 200))
                  (local_8,local_c,&local_18,CONCAT31((int3)((uint)&local_34 >> 8),local_1d),
                   &local_34);
        uVar5 = extraout_ECX_03;
        uVar6 = extraout_EDX_03;
      }
      local_1c = local_1c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  cVar1 = FUN_00403270(local_8,uVar6,uVar5);
  if (((cVar1 != '\0') && ((char)local_8[0x8e] != '\0')) &&
     (*(int *)(local_8[0x9d] + 0x218) == local_10)) {
    if ((local_1d & 1) == 0) {
      FUN_0041c318((int *)local_c[5],0xffffff);
    }
    else {
      FUN_0041c318((int *)local_c[5],0x8000000d);
    }
    FUN_00525054((int *)local_8[0x9d],local_10,(uint *)&local_44);
    FUN_0041c97c(local_c,&local_44);
  }
  return;
}

