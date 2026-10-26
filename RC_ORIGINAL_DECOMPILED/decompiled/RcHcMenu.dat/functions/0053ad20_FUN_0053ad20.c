/*
 * FUN_0053ad20 at 0053ad20
 * undefined __register FUN_0053ad20(int * param_1)
 * Address ranges: 0053ad20-0053adbe;0053adc6-0053ae37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053ad20(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if ((char)param_1[0xb6] != '\0') {
    puStack_10 = (undefined1 *)0x53ad40;
    uVar3 = FUN_00529294((int)param_1);
    if ((char)uVar3 != '\0') {
      puStack_10 = (undefined1 *)0x53ad50;
      FUN_0053a230(param_1);
      puStack_10 = (undefined1 *)0x53ad58;
      FUN_00539a78(param_1);
      puStack_10 = (undefined1 *)0x53ad66;
      FUN_00549860((int *)param_1[0xa4]);
      if ((char)param_1[0xb6] == '\x02') {
        *(undefined1 *)(param_1 + 0xb6) = 0;
        puStack_10 = (undefined1 *)0x53ad8b;
        FUN_00529720((uint)param_1);
        puStack_14 = &LAB_0053adbf;
        uStack_18 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_18;
        puStack_10 = &stack0xfffffffc;
        piVar5 = (int *)FUN_00538860(param_1);
        (**(code **)(*piVar5 + 0xcc))();
        *in_FS_OFFSET = uStack_18;
        puStack_10 = (undefined1 *)0x53adf3;
        puStack_14 = (undefined1 *)0x53adbe;
        FUN_00529758(param_1);
        return;
      }
      uVar3 = extraout_ECX;
      uVar6 = extraout_EDX;
      if ((char)param_1[0xb6] == '\x03') {
        *(undefined1 *)(param_1 + 0xb6) = 0;
        puStack_10 = (undefined1 *)0x53add8;
        piVar5 = (int *)FUN_00538fbc(param_1);
        puStack_10 = (undefined1 *)0x53addd;
        FUN_005379b0(piVar5);
        uVar3 = extraout_ECX_00;
        uVar6 = extraout_EDX_00;
        if (*(char *)((int)param_1 + 0x2d2) != '\0') {
          puStack_10 = (undefined1 *)0x53adf3;
          FUN_005390fc(param_1,'\0');
          uVar3 = extraout_ECX_01;
          uVar6 = extraout_EDX_01;
        }
      }
      *(undefined1 *)(param_1 + 0xb6) = 0;
      puStack_10 = (undefined1 *)0x53ae09;
      cVar2 = FUN_00403270(param_1,uVar6,uVar3);
      if (cVar2 != '\0') {
        puStack_10 = (undefined1 *)0x53ae18;
        (**(code **)(*param_1 + 0xb0))();
      }
      puStack_10 = (undefined1 *)0x53ae20;
      iVar4 = FUN_00538860(param_1);
      puStack_10 = (undefined1 *)0x53ae25;
      puStack_10 = (undefined1 *)FUN_00523748(iVar4);
      puStack_14 = (undefined1 *)0x53ae2e;
      piVar5 = (int *)FUN_00538860(param_1);
      puVar1 = puStack_10;
      puStack_10 = (undefined1 *)0x53ae34;
      FUN_00524fb8(piVar5,(int)puVar1);
    }
  }
  return;
}

