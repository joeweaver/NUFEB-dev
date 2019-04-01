vtk_module(vtkFiltersParallel
  GROUPS
    StandAlone
  DEPENDS
    vtkParallelCore
    vtkFiltersExtraction
    vtkRenderingCore
    vtkFiltersModeling
    vtkFiltersGeometry
  TEST_DEPENDS
    vtkParallelMPI
    vtkTestingCore
    vtkTestingRendering
    vtkInteractionStyle
    vtkIOXML
    vtkRendering${VTK_RENDERING_BACKEND}
    vtkRenderingParallel
    vtkFiltersParallelMPI
    vtkFiltersParallelImaging
    vtkFiltersFlowPaths
    vtkIOLegacy
  KIT
    vtkParallel
  )
