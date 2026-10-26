/*
 * FUN_004055a8 at 004055a8
 * undefined __register FUN_004055a8(VARIANTARG * param_1, undefined4 param_2)
 * Address ranges: 00405544-00405599;004055a8-004055e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055a8(VARIANTARG *param_1,undefined4 param_2)

{
  LPCSTR pCVar1;
  HRESULT HVar2;
  BSTR pOVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 local_14 [2];
  
  if ((((VARIANTARG *)param_2)->n1).n2.vt == 0x101) {
    puVar5 = local_14;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *(undefined4 *)&((VARIANTARG *)param_2)->n1;
      param_2 = (VARIANTARG *)((int)&((VARIANTARG *)param_2)->n1 + 4);
      puVar5 = puVar5 + 1;
    }
    puStackY_24 = (undefined1 *)0x405563;
    FUN_00405bd4((VARIANT *)local_14);
    puStackY_28 = &LAB_0040559a;
    uStackY_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_2c;
    puStackY_24 = &stack0xfffffffc;
    (*DAT_005733ec)(local_14);
    FUN_004055a8(param_1,local_14);
    *in_FS_OFFSET = uStackY_2c;
    puStackY_24 = &LAB_004055a1;
    puStackY_28 = (undefined1 *)0x405599;
    FUN_00405bcc((VARIANTARG *)local_14);
    return;
  }
  if ((((VARIANTARG *)param_2)->n1).n2.vt == 0x100) {
    if (7 < (param_1->n1).n2.vt) {
      FUN_00404de4(param_1);
    }
    (param_1->n1).n2.vt = 8;
    pOVar3 = (BSTR)((int)&param_1->n1 + 8);
    pCVar1 = *(LPCSTR *)((int)&((VARIANTARG *)param_2)->n1 + 8);
    pOVar3[0] = L'\0';
    pOVar3[1] = L'\0';
    FUN_004045b8(pOVar3,pCVar1);
    return;
  }
  if (param_1 != (VARIANTARG *)param_2) {
    if (7 < (param_1->n1).n2.vt) {
      if ((param_1->n1).n2.vt == 0x100) {
        FUN_00403db0((int *)((int)&param_1->n1 + 8));
      }
      else if ((param_1->n1).n2.vt == 0x101) {
        (*DAT_005733e8)();
      }
      else {
        local_14[1] = 0x404e4c;
        VariantClear(param_1);
      }
    }
    if ((((VARIANTARG *)param_2)->n1).n2.vt < 8) {
      *(undefined4 *)&param_1->n1 = *(undefined4 *)&((VARIANTARG *)param_2)->n1;
      *(undefined4 *)((int)&param_1->n1 + 8) =
           *(undefined4 *)((int)&((VARIANTARG *)param_2)->n1 + 8);
      *(undefined4 *)((int)&param_1->n1 + 0xc) =
           *(undefined4 *)((int)&((VARIANTARG *)param_2)->n1 + 0xc);
      return;
    }
    if ((((VARIANTARG *)param_2)->n1).n2.vt == 0x100) {
      iVar4 = *(int *)((int)&((VARIANTARG *)param_2)->n1 + 8);
      if ((iVar4 != 0) && (-1 < *(int *)(iVar4 + -8))) {
        LOCK();
        *(int *)(iVar4 + -8) = *(int *)(iVar4 + -8) + 1;
        UNLOCK();
      }
      (param_1->n1).n2.vt = 0x100;
      *(int *)((int)&param_1->n1 + 8) = iVar4;
      return;
    }
    if ((((VARIANTARG *)param_2)->n1).n2.vt == 0x101) {
      FUN_00404e66((undefined4 *)param_1,(undefined4 *)param_2);
                    /* WARNING: Could not recover jumptable at 0x00404e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_005733f0)(param_1);
      return;
    }
    (param_1->n1).n2.vt = 0;
    HVar2 = VariantCopyInd(param_1,(VARIANTARG *)param_2);
    if (HVar2 != 0) {
      FUN_00402874(CONCAT31((int3)((uint)HVar2 >> 8),0x10));
      return;
    }
  }
  return;
}

