/*
 * FUN_00488efc at 00488efc
 * undefined __register FUN_00488efc(int param_1, char param_2, undefined4 param_3, char param_4)
 * Address ranges: 00488efc-004890f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00488efc(int param_1,char param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  undefined1 extraout_DL;
  undefined1 uVar6;
  int unaff_EBX;
  byte *unaff_ESI;
  int unaff_EDI;
  int *in_FS_OFFSET;
  int iVar7;
  undefined4 in_stack_ffffffd4;
  undefined4 *in_stack_ffffffd8;
  byte *local_24;
  int local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 4;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  iVar4 = 0;
  UNLOCK();
  uVar6 = 0;
  if (param_2 != '\0') {
    param_1 = FUN_004033d4(param_1,param_2,0,in_stack_ffffffd4,in_stack_ffffffd8);
    iVar4 = extraout_ECX;
    uVar6 = extraout_DL;
  }
  local_8 = CONCAT13(uVar6,(undefined3)local_8);
  iVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffc8;
  *(char *)(param_1 + 0x10) = param_4;
  *(int *)(param_1 + 4) = iVar4;
  uVar3 = FUN_00403224(*(int **)(iVar4 + 0x28),(int)&PTR_FUN_0047dcb0);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  bVar1 = FUN_0048493c(*(int **)(param_1 + 8),(int *)(param_1 + 0xc));
  if (bVar1) {
    if (*(char *)(*(int *)(param_1 + 8) + 0x8d) == '\x06') {
      iVar4 = *(int *)(param_1 + 8);
      FUN_004692f8(*(int *)(param_1 + 4),(int *)&stack0xffffffec);
      local_c = CONCAT31(local_c._1_3_,0xb);
      local_10 = unaff_EBX;
      FUN_00406a48((undefined4 *)PTR_PTR_00572290,(int *)&stack0xffffffe8);
      FUN_00466e30(unaff_ESI,&local_10,0,iVar4);
    }
    uVar3 = FUN_0046cde0(*(int *)(param_1 + 4));
    if ((char)uVar3 == '\0') {
      if (param_4 == '\0') {
        if (((*(char *)(*(int *)(param_1 + 8) + 0x1b5) == '\0') ||
            (iVar4 = FUN_004730d8(*(int *)(param_1 + 8)), iVar4 != *(int *)(param_1 + 0xc))) ||
           ((cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x7c))(), cVar2 == '\0' &&
            (FUN_00485234(*(int *)(param_1 + 8),*(int *)(param_1 + 4),*(int *)(param_1 + 0xc),
                          (int *)&stack0xffffffe4), unaff_EDI == 0)))) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        *(undefined1 *)(param_1 + 0x24) = uVar6;
      }
      else {
        iVar7 = 0;
        FUN_00485260(*(int *)(param_1 + 8),*(int *)(param_1 + 4),*(int *)(param_1 + 0xc),
                     (undefined4 *)0x0);
        if (*(char *)(*(int *)(param_1 + 4) + 0x35) != '\0') {
          iVar7 = *(int *)(param_1 + 8);
          FUN_004692f8(*(int *)(param_1 + 4),&local_20);
          local_10 = local_20;
          local_c = CONCAT31(local_c._1_3_,0xb);
          FUN_00406a48((undefined4 *)PTR_PTR_005723d4,(int *)&local_24);
          FUN_00466e30(local_24,&local_10,0,iVar7);
        }
        if (1 < (byte)(*(char *)(*(int *)(param_1 + 8) + 0x8d) - 2U)) {
          FUN_00406a48((undefined4 *)PTR_PTR_005722d4,(int *)&stack0xffffffd8);
          FUN_00466d84(in_stack_ffffffd8,*(int *)(param_1 + 8));
        }
      }
      if (*(char *)(param_1 + 0x24) == '\0') {
        if (*(char *)(*(int *)(param_1 + 8) + 0x8d) == '\x01') {
          uVar3 = FUN_004730d8(*(int *)(param_1 + 8));
          (**(code **)(**(int **)(param_1 + 8) + 0x21c))(*(int **)(param_1 + 8),uVar3);
        }
        iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x168);
        uVar5 = thunk_FUN_00479ad6(iVar7);
        FUN_0047fe48(uVar5);
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (param_4 == '\x01') {
      FUN_00489520(param_1);
    }
  }
  *in_FS_OFFSET = iVar7;
  FUN_00403dd4((int *)&stack0xffffffd8,6);
  return;
}

