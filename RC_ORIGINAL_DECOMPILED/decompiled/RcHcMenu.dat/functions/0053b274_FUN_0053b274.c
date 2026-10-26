/*
 * FUN_0053b274 at 0053b274
 * undefined __register FUN_0053b274(int * param_1)
 * Address ranges: 0053b274-0053b347;0053b3af-0053b3ea;0053b40f-0053b415
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053b274(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if ((char)param_1[0xb6] != '\0') {
    puStack_20 = (undefined1 *)0x53b298;
    uVar2 = FUN_00529294((int)param_1);
    if ((char)uVar2 != '\0') {
      puStack_20 = (undefined1 *)0x53b2a8;
      FUN_0053a230(param_1);
      puStack_20 = (undefined1 *)0x53b2b0;
      FUN_005298b4((uint)param_1);
      puStack_24 = &LAB_0053b408;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x53b2c6;
      puStack_20 = &stack0xfffffffc;
      FUN_0053a398(param_1);
      puStack_2c = (undefined1 *)0x53b2ce;
      FUN_00539a78(param_1);
      puStack_30 = &LAB_0053b348;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      FUN_00549504((int *)param_1[0xa4]);
      uVar2 = extraout_ECX;
      uVar4 = extraout_EDX;
      if ((char)param_1[0xb6] == '\x03') {
        piVar3 = (int *)FUN_00538fbc(param_1);
        FUN_005379b0(piVar3);
        uVar2 = extraout_ECX_00;
        uVar4 = extraout_EDX_00;
        if (*(char *)((int)param_1 + 0x2d2) != '\0') {
          FUN_005390fc(param_1,'\0');
          uVar2 = extraout_ECX_01;
          uVar4 = extraout_EDX_01;
        }
      }
      *(undefined1 *)(param_1 + 0xb6) = 0;
      cVar1 = FUN_00403270(param_1,uVar4,uVar2);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0xb0))();
      }
      *in_FS_OFFSET = uStack_34;
      puStack_2c = (undefined1 *)0x53b3b7;
      FUN_00529720((uint)param_1);
      puStack_30 = &LAB_0053b3eb;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      piVar3 = (int *)FUN_00538860(param_1);
      (**(code **)(*piVar3 + 0xcc))();
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0053b3f2;
      puStack_30 = (undefined1 *)0x53b3ea;
      FUN_00529758(param_1);
      return;
    }
  }
  return;
}

