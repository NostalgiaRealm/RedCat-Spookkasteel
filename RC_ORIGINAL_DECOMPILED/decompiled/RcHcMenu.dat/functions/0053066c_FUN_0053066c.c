/*
 * FUN_0053066c at 0053066c
 * undefined __register FUN_0053066c(int * param_1, undefined4 * param_2)
 * Address ranges: 0053066c-00530826;0053082e-0053084e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 81 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 81 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_0053066c(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  VARIANT *pVVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  VARIANT local_24;
  int *local_10;
  int *local_c;
  int *local_8;
  
  pVVar6 = &local_24;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)&pVVar6->n1 = *param_2;
    param_2 = param_2 + 1;
    pVVar6 = (VARIANT *)((int)&pVVar6->n1 + 4);
  }
  puStack_34 = (undefined1 *)0x53068c;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_38 = &LAB_0053084f;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  piStack_40 = (int *)0x5306a2;
  puStack_34 = &stack0xfffffffc;
  uVar3 = FUN_00405c08((short *)&local_24);
  if ((char)uVar3 == '\0') {
    piStack_40 = (int *)0x5306ae;
    bVar1 = FUN_00405c2c((short *)&local_24);
    if (!bVar1) {
      if ((local_8[0xa5] == 0) || (*(char *)(local_8[0xa5] + 0x18) == '\0')) {
        if ((local_8[0xb8] != 0) && (local_8[0xb2] != 0)) {
          local_c = (int *)0x0;
          local_10 = (int *)0x0;
          puStack_44 = &LAB_00530827;
          uStack_48 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_48;
          piStack_40 = (int *)&stack0xfffffffc;
          local_c = (int *)FUN_0049206c((int *)local_8[0xb2]);
          local_10 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX);
          iVar5 = FUN_0052f8a8(local_8);
          FUN_0048eeb4(local_10,iVar5);
          piVar4 = (int *)FUN_004949bc(local_c);
          FUN_004964d0(piVar4,(undefined4 *)&local_24);
          cVar2 = FUN_004d28c0((int *)local_8[0xb8],local_c,local_10);
          if (cVar2 == '\0') {
            (**(code **)(*local_8 + 0x138))();
          }
          else {
            FUN_00532e84(local_8,local_c);
          }
          *in_FS_OFFSET = uStack_48;
          piStack_40 = (int *)0x530839;
          puStack_44 = (undefined1 *)0x53081e;
          FUN_00403094(local_c);
          puStack_44 = (undefined1 *)0x530826;
          FUN_00403094(local_10);
          return;
        }
        piStack_40 = (int *)0x530839;
        (**(code **)(*local_8 + 0x138))();
      }
      else {
        piStack_40 = (int *)0x5306f2;
        cVar2 = FUN_00548824((int *)local_8[0xa5],(undefined4 *)&local_24);
        if (cVar2 == '\0') {
          piStack_40 = (int *)0x53075a;
          (**(code **)(*local_8 + 0x138))();
        }
        else {
          piStack_40 = (int *)0x530704;
          piStack_40 = (int *)FUN_00549b80(local_8[0xa5]);
          puStack_44 = (undefined1 *)0x530719;
          iVar5 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00531904);
          piVar4 = piStack_40;
          piStack_40 = (int *)0x53071f;
          FUN_0053282c(iVar5,piVar4);
          piStack_40 = (int *)0x530727;
          piVar4 = (int *)FUN_00533c14((int)local_8);
          piStack_40 = (int *)0x53072c;
          iVar5 = FUN_005285b8(piVar4);
          piStack_40 = (int *)0x530731;
          uVar3 = FUN_00523748(iVar5);
          piStack_40 = (int *)0x530747;
          iVar5 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00531904);
          *(undefined4 *)(iVar5 + 0x10) = uVar3;
        }
      }
      goto LAB_00530839;
    }
  }
  piStack_40 = (int *)0x5306bd;
  (**(code **)(*local_8 + 0x138))();
LAB_00530839:
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00530856;
  puStack_38 = (undefined1 *)0x53084e;
  FUN_00405bcc(&local_24);
  return;
}

