/*
 * FUN_0052485c at 0052485c
 * undefined __register FUN_0052485c(int * param_1)
 * Address ranges: 0052485c-005249c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052485c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  HDC hdc;
  BOOL BVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  RECT *lprect;
  RECT local_24;
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  iVar2 = FUN_0052361c(param_1);
  if (*(int *)(iVar2 + 0x288) == 0) {
    iVar2 = FUN_0052361c(local_8);
    if (*(char *)(iVar2 + 0x20d) == '\0') {
      local_10 = (int *)local_8[0x7c];
    }
    else {
      uVar3 = FUN_00432178(local_8);
      piVar4 = FUN_0051c310(uVar3,extraout_EDX,extraout_ECX);
      (**(code **)(*piVar4 + 0x40))(piVar4,uVar3);
      uVar3 = FUN_004321bc(local_8);
      piVar4 = FUN_0051c310(uVar3,extraout_EDX_00,extraout_ECX_00);
      uVar3 = (**(code **)(*piVar4 + 0x34))(piVar4,uVar3);
      piVar4 = FUN_0051c310(uVar3,extraout_EDX_01,extraout_ECX_01);
      local_10 = (int *)FUN_00421490(piVar4);
    }
    FUN_00524100(local_8,local_10);
    iVar2 = FUN_00523e68(local_8);
    if (iVar2 == -1) {
      piVar4 = (int *)FUN_0052361c(local_8);
      cVar1 = FUN_00403270(piVar4,extraout_EDX_02,extraout_ECX_02);
      if (cVar1 != '\0') {
        piVar4 = (int *)FUN_0052361c(local_8);
        FUN_00520ec4(piVar4,local_10);
      }
    }
    else {
      iVar2 = local_8[0x84];
      iVar5 = FUN_00523e68(local_8);
      uVar6 = iVar5 + local_8[0x84];
      if (SCARRY4(iVar5,local_8[0x84])) {
        uVar6 = thunk_FUN_00402874(uVar6);
      }
      if (iVar2 <= (int)uVar6) {
        local_14 = (uVar6 - iVar2) + 1;
        local_c = iVar2;
        do {
          FUN_00525054(local_8,local_c,(uint *)&local_24);
          lprect = &local_24;
          hdc = (HDC)FUN_0041cf6c((int *)local_8[0x7c]);
          BVar7 = RectVisible(hdc,lprect);
          if (BVar7 != 0) {
            (**(code **)(*local_8 + 0xc0))(local_8,local_c);
            piVar4 = (int *)FUN_0052361c(local_8);
            FUN_00520ccc(piVar4,local_10,local_c);
          }
          local_c = local_c + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_14 = 0;
      }
    }
    iVar2 = FUN_0052361c(local_8);
    if (*(char *)(iVar2 + 0x20d) != '\0') {
      piVar4 = FUN_0051c310(iVar2,extraout_EDX_03,extraout_ECX_03);
      FUN_0041c8d0((int *)local_8[0x7c],0,0,piVar4);
    }
  }
  return;
}

